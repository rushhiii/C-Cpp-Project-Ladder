## What is ```\n``` exactly?
The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

Examples of other valid escape sequences are:

Escape Sequence	Description
- ```\t``` Creates a horizontal tab	
- ```\\``` Inserts a backslash character (\)	
- ```\"```	Inserts a double quote character (")	

## Comments in C

- Single-line comments start with two forward slashes (//).\
Any text between // and the end of the line is ignored by the compiler (will not be executed).\
This example uses a single-line comment before a line of code:

```c
// This is a comment
printf("Hello World!");

printf("Hello World!"); // This is a comment
```

- C Multi-line Comments\
Multi-line comments start with /* and ends with */.
Any text between /* and */ will be ignored by the compiler:


```c
/* The code below will print the words Hello World!
to the screen, and it is amazing */
printf("Hello World!");
```
