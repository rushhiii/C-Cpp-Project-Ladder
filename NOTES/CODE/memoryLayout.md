## 🧱 C Memory Layout: The Big Picture

When a C program runs, your code uses memory in **four main regions**:

```plaintext
+----------------------+
| Stack                | ← function calls, local vars
+----------------------+
| Heap                 | ← malloc/free, dynamic memory
+----------------------+
| Data Segment (.data) | ← global vars with initial values
+----------------------+
| BSS Segment (.bss)   | ← global vars without values
+----------------------+
| Code Segment (.text) | ← compiled machine code
+----------------------+
```

---

## 🔹 1. **Stack**

* Stores **function calls**, **local variables**
* Grows **downward**
* Automatically cleaned up when a function ends

### Example:

```c
void greet() {
    int x = 10; // lives on stack
}
```

---

## 🔹 2. **Heap**

* Memory you **manually allocate** (and free)
* Grows **upward**
* You use: `malloc()`, `calloc()`, `free()`

### Example:

```c
int *arr = malloc(10 * sizeof(int)); // heap
free(arr); // must manually free it
```

---

## 🔹 3. **Global (Data + BSS)**

```c
int g1 = 5; // .data (initialized)
int g2;     // .bss (uninitialized)
```

* **Exist for the entire program duration**
* Stored outside the stack or heap

---

## 🧪 Test it Out: `memory_layout.c`

```c
#include <stdio.h>
#include <stdlib.h>

int global_var = 10;       // .data
int uninitialized_var;     // .bss

void show_addresses() {
    int local_var = 5;     // stack
    int *heap_var = malloc(sizeof(int)); // heap
    *heap_var = 99;

    printf("Code  (main):     %p\n", (void*)main);
    printf("Global (init):   %p\n", (void*)&global_var);
    printf("Global (uninit): %p\n", (void*)&uninitialized_var);
    printf("Local (stack):   %p\n", (void*)&local_var);
    printf("Heap:            %p\n", (void*)heap_var);

    free(heap_var);
}

int main() {
    show_addresses();
    return 0;
}
```

### 🔧 Compile + Run:

```bash
gcc memory_layout.c -o memory_layout
./memory_layout
```

You’ll see:

* The code (text) is the lowest address
* Globals are next
* Stack and heap grow **toward each other** from opposite ends

---

## 🧠 Key Takeaways

| Concept          | Detail                                       |
| ---------------- | -------------------------------------------- |
| **Stack**        | Local variables, function calls              |
| **Heap**         | Dynamic memory (`malloc`, `free`)            |
| **Global / BSS** | Outside main, exist program-wide             |
| **Code segment** | Your actual functions live here              |
| **`sizeof()`**   | Tells memory footprint of variables or types |