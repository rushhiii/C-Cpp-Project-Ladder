## 🧠 Let’s Start with the Very First Line:

```c
#include <stdio.h>
```

### 🔍 What it means:

- `#include` = **Preprocessor directive**
- `<stdio.h>` = “Standard(std) Input/Output(io) Header(.h)”

💡 **You're telling the compiler:**
> “Before compiling, include the definitions for input/output functions like `printf()` and `scanf()` from the standard library.”


### 🧩 Why do we need it?

Because in C, **nothing is available by default.**  
You want to print something? You must tell the compiler where the function `printf` lives.

Without `#include <stdio.h>`, if you write:

```c
printf("Hello");
````

You’ll get a compiler error like:

```
undefined reference to 'printf'
```

So you include the library that defines it. ✅

> `stdio.h` contains declarations for:

* `printf`, `scanf`
* `fopen`, `fgets`, `fputs`
* `FILE`, `stdin`, `stdout`, `stderr`

## 🔧 What the full C program actually looks like:

```c
#include <stdio.h>   // includes printf, scanf, etc.

int main() {         // entry point of your program
    printf("Hello, World!\n");  // print text to terminal
    return 0;        // exit code 0 = success
}
```

## 🔤 C Syntax Primer — Minimal but Powerful

| Concept           | Syntax                            | Example              |
| ----------------- | --------------------------------- | -------------------- |
| **Semicolon**     | All statements end with `;`       | `int x = 5;`         |
| **Braces**        | Code blocks use `{}`              | `if (x > 0) { ... }` |
| **Main function** | Must have `int main()`            | Entry point          |
| **Comments**      | `// single line` or `/* multi */` | `// comment`         |
| **Variables**     | Must declare with type            | `int age = 21;`      |
| **Print**         | `printf("text");`                 | Uses `stdio.h`       |

## Quick Hands-on Exercise: Your Turn!

Try writing this in a new file `intro/variables.c`:

```c
#include <stdio.h>

int main() {
    int age = 18;
    float gpa = 3.75;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### 💡 Explanation:

* `int` = whole number
* `float` = decimal (use `%f` in printf, `%.2f` = 2 decimals)
* `char` = single character (`'A'`)

---

### 💻 Compile & Run:

```bash
cd intro
gcc variables.c -o variables
./variables
```

You should see:

```
Age: 18
GPA: 3.75
Grade: A
```

---

### ✅ Once done:

Reply:

> ✅ Ran variables.c — what’s next?

And I’ll walk you through:

* Input from the user
* Memory layout
* And more data types like `double`, `short`, `long`, `unsigned`, etc.
