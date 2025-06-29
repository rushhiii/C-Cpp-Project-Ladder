## 📚 Standard C Library: Most Useful Built-in Functions

> 🧠 All of these come from standard headers like `<stdio.h>`, `<string.h>`, `<stdlib.h>`, etc.


### 🔤 **String Handling (`<string.h>`)**

| Function         | Description                                      |
| ---------------- | ------------------------------------------------ |
| `strcmp(s1, s2)` | Compare two strings (0 if equal)                 |
| `strncmp()`      | Compare first `n` characters of two strings      |
| `strcpy()`       | Copy one string to another                       |
| `strncpy()`      | Safer version of `strcpy`                        |
| `strlen()`       | Get length of string                             |
| `strcat()`       | Concatenate (append) strings                     |
| `strchr()`       | Find first occurrence of a character in a string |
| `strstr()`       | Find a substring in a string                     |


### 🧮 **Math & Conversions (`<math.h>`, `<stdlib.h>`)**

| Function    | Description                                |
| ----------- | ------------------------------------------ |
| `pow(x, y)` | Raise `x` to power `y`                     |
| `sqrt(x)`   | Square root of `x`                         |
| `abs(x)`    | Absolute value of an integer               |
| `fabs(x)`   | Absolute value of a float/double           |
| `round(x)`  | Round float to nearest int                 |
| `ceil(x)`   | Round up                                   |
| `floor(x)`  | Round down                                 |
| `atof(str)` | Convert string to float                    |
| `atoi(str)` | Convert string to integer                  |
| `strtol()`  | Convert string to long (with base support) |


### 🔠 **Character Handling (`<ctype.h>`)**

| Function     | Description                               |
| ------------ | ----------------------------------------- |
| `isalpha(c)` | Is alphabetic letter                      |
| `isdigit(c)` | Is numeric digit                          |
| `isalnum(c)` | Is alphanumeric                           |
| `isspace(c)` | Is whitespace (space, tab, newline, etc.) |
| `toupper(c)` | Convert to uppercase                      |
| `tolower(c)` | Convert to lowercase                      |


### 💻 **Input / Output (`<stdio.h>`)**

| Function         | Description                         |
| ---------------- | ----------------------------------- |
| `printf()`       | Print formatted output to screen    |
| `scanf()`        | Read formatted input from user      |
| `getchar()`      | Read single char from stdin         |
| `putchar()`      | Write single char to stdout         |
| `fgets()`        | Read a line (string) from input     |
| `fputs()`        | Write string to output              |
| `fflush(stdout)` | Force output to display immediately |


### 📁 **File I/O (`<stdio.h>`)**

| Function    | Description                    |
| ----------- | ------------------------------ |
| `fopen()`   | Open a file                    |
| `fclose()`  | Close a file                   |
| `fscanf()`  | Read formatted input from file |
| `fprintf()` | Write formatted output to file |
| `fgets()`   | Read line from file            |
| `feof()`    | Check for end-of-file          |


### 🎲 **Random Numbers (`<stdlib.h>`)**

| Function      | Description                                   |
| ------------- | --------------------------------------------- |
| `rand()`      | Returns pseudo-random number (0 to RAND\_MAX) |
| `srand(seed)` | Seed the random number generator              |


### 🕒 **Date & Time (`<time.h>`)**

| Function      | Description                            |
| ------------- | -------------------------------------- |
| `time(NULL)`  | Get current time (seconds since epoch) |
| `localtime()` | Convert to local time struct           |
| `strftime()`  | Format date/time into a string         |
| `difftime()`  | Get time difference in seconds         |


### 🧠 **Memory Functions (`<stdlib.h>` / `<string.h>`)**

| Function       | Description                         |
| -------------- | ----------------------------------- |
| `malloc(size)` | Allocate dynamic memory             |
| `calloc(n, s)` | Allocate and zero-initialize memory |
| `realloc()`    | Resize dynamic memory               |
| `free(ptr)`    | Free dynamic memory                 |
| `memcpy()`     | Copy memory blocks                  |
| `memset()`     | Fill memory with a value            |


## ✨ Most Useful for You Right Now (CLI + Conversion)

For your CLI projects, start with:

* `strcmp()` / `strlen()` → for comparing unit names
* `scanf()` / `fflush(stdout)` → for safe input
* `fgets()` → for more controlled input
* `atof()` → to convert string input to float
* `round()` / `fabs()` → to clean conversion output
* `isalpha()` / `isdigit()` → for validation if needed