
**Variables are containers for storing data values, like numbers and characters.**

In C, there are different types of variables (defined with different keywords), for example:

- ```int``` - stores integers (whole numbers), without decimals, such as ```123``` or ```-123```
- ```float``` - stores floating point numbers, with decimals, such as ```19.99``` or ```-19.99```
- ```char``` - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes

### Declaring (Creating) Variables
```c
type variableName = value;
```
Example
```c
// Declare a variable
int myNum;

// Assign a value to the variable
myNum = 15;
```

### Format Specifiers
Format specifiers are used together with the ```printf()``` function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign ```%```, followed by a character.

For example, to output the value of an ```int``` variable, use the format specifier ```%d``` surrounded by double quotes ```("")```, inside the ```printf()``` function:

```c
int myNum = 15;
printf("%d", myNum);  // Outputs 15
```

More Example
```c
// Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```

```c
int myNum = 15;
char myLetter = 'D';
printf("My number is %d and my letter is %c", myNum, myLetter);
```


### Change Variable Values

You can also assign the value of one variable to another:

```c
int myNum = 15;

int myOtherNum = 23;

// Assign the value of myOtherNum (23) to myNum
myNum = myOtherNum;

// myNum is now 23, instead of 15
printf("%d", myNum);
```

Or copy values to empty variables:

```c
// Create a variable and assign the value 15 to it
int myNum = 15;

// Declare a variable without assigning it a value
int myOtherNum;

// Assign the value of myNum to myOtherNum
myOtherNum = myNum;

// myOtherNum now has 15 as a value
printf("%d", myOtherNum);
```

### Add Variables Together
```c
int x = 2;
int y = 3;
int sum = x + y;
printf("%d", sum);
```

### Declare Multiple Variables
To declare more than one variable of the same type, use a comma-separated list:

```c
int x = 5, y = 6, z = 50;
printf("%d", x + y + z);
```

You can also assign the same value to multiple variables of the same type:
```c
int x, y, z;
x = y = z = 50;
printf("%d", x + y + z);
```

### Variable Nameing

```c
// Good variable name
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```

The general rules for naming variables are:

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (_)
- Names are **case-sensitive** (```myVar``` and ```myvar``` are - different variables)
- Names **cannot contain** whitespaces or special characters like !, #, %, etc.
- Reserved words (such as ```int```) cannot be used as names



## Constants
If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

This will declare the variable as "constant", which means unchangeable and read-only:

```c
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
```
