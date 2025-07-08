# Format Specifiers Cheat Sheet

| Type                  | Data Type            | `printf` Specifier | `scanf` Specifier | Example                         |
| --------------------- | -------------------- | ------------------ | ----------------- | ------------------------------- |
| 🧮 Integer            | `int`                | `%d`               | `%d`              | `int age = 18;`                 |
| 🔢 Unsigned Integer   | `unsigned int`       | `%u`               | `%u`              | `unsigned int count = 99;`      |
| 🔢 Short Integer      | `short`              | `%hd`              | `%hd`             | `short temp = 25;`              |
| 🔢 Unsigned Short     | `unsigned short`     | `%hu`              | `%hu`             | `unsigned short us = 30;`       |
| 🧠 Long Integer       | `long`               | `%ld`              | `%ld`             | `long distance = 100000;`       |
| 🧠 Unsigned Long      | `unsigned long`      | `%lu`              | `%lu`             | `unsigned long pop = 999999;`   |
| 🧠 Long Long          | `long long`          | `%lld`             | `%lld`            | `long long big = 123456789012;` |
| 🧠 Unsigned Long Long | `unsigned long long` | `%llu`             | `%llu`            | `unsigned long long ubig;`      |


## 🧮 Floating Point
| Type          | `printf` | `scanf` | Example                      |
| ------------- | -------- | ------- | ---------------------------- |
| `float`       | `%f`     | `%f`    | `float pi = 3.14;`           |
| `double`      | `%lf`    | `%lf`   | `double d = 1.234;`          |
| `long double` | `%Lf`    | `%Lf`   | `long double pi = 3.14159L;` |

## 🔡 Characters and Strings

| Type              | `printf` | `scanf` | Example             |
| ----------------- | -------- | ------- | ------------------- |
| `char`            | `%c`     | `%c`    | `char grade = 'A';` |
| `char[]` (string) | `%s`     | `%s`    | `char name[20];`    |

>💡 scanf("%s", name); stops reading at the first whitespace!

## 🧪 Misc

| Type            | `printf` | Use                           |
| --------------- | -------- | ----------------------------- |
| Pointer address | `%p`     | `printf("%p", ptr);`          |
| Octal           | `%o`     | Displays in base-8            |
| Hex (lowercase) | `%x`     | Displays in base-16           |
| Hex (uppercase) | `%X`     | Displays in base-16 uppercase |
| Escape percent  | `%%`     | Prints `%` character          |

