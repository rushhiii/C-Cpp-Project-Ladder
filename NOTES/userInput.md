### 🔹 1. **Basic Input with `scanf()`**

**`scanf()`** is the primary function to read input from the user.

#### Syntax:

```c
scanf("format_specifier", &variable);
```

The & is the address-of operator — it tells scanf where to store the input

The "format" must match the data type of the variable



#### Example:

```c
int age;
printf("Enter your age: ");
scanf("%d", &age);
```

* `%d` is a **format specifier** for `int`.
* `&age` passes the **address** of the variable, so `scanf` can store the value there.

---

### 🔹 2. **Common Format Specifiers**

| Data Type | Format Specifier | Example              |
| --------- | ---------------- | -------------------- |
| `int`     | `%d`             | `scanf("%d", &i);`   |
| `float`   | `%f`             | `scanf("%f", &f);`   |
| `double`  | `%lf`            | `scanf("%lf", &d);`  |
| `char`    | `%c`             | `scanf(" %c", &c);`  |
| `string`  | `%s`             | `scanf("%s", name);` |

> 🧠 **Note for `char` input:** Use a space before `%c` to skip leftover newline characters.

> 🔐 **Note for `string`:** `scanf("%s", name);` stops at the first space. Use `fgets()` for full lines.

---

### 🔹 3. **Reading a Whole Line: `fgets()`**

```c
char name[100];
printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
```

* Reads up to 99 characters or until newline.
* Automatically includes the `\n` at the end unless the input fills the buffer.
* Safe and preferred for strings with spaces.

---

### 🔹 4. **Multiple Inputs at Once**

```c
int a, b;
scanf("%d %d", &a, &b);
```

* User can type: `10 20`


### 🔹 5. **Using `getchar()` and `putchar()`**

Useful for reading single characters:

```c
char ch;
ch = getchar();   // read
putchar(ch);      // write
```

### 🔹 6. **Validating Input (Advanced)**

To avoid errors like type mismatch:

```c
int x;
if (scanf("%d", &x) != 1) {
    printf("Invalid input!\n");
    // flush input buffer...
}
```

### 🔹 7. **Common Mistakes to Avoid**

* ❌ Forgetting `&` in `scanf()` (except for arrays).
* ❌ Using `scanf("%s", str);` for full names with spaces.
* ❌ Buffer overflow: Always define array sizes large enough for input.