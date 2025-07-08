## 🔁 Types of Loops in C

C provides three main types of loops:

| Loop Type    | Structure Used For                             |
| ------------ | ---------------------------------------------- |
| `for` loop   | When **number of iterations is known**         |
| `while` loop | When **condition must be checked before loop** |
| `do...while` | When **loop must run at least once**           |

---

## 1. **`for` Loop**

### 🔹 Syntax:

```c
for (initialization; condition; increment) {
    // code to run
}
```

### 🔹 Example:

```c
for (int i = 0; i < 5; i++) {
    printf("i = %d\\n", i);
}
```

### 🔹 Use Case:

* Best when **you know how many times** the loop needs to run.
* Clean and compact.
* Used in arrays, counting, fixed-length iterations.

### ✅ Pros:

* All loop control in one line.
* Ideal for **indexed loops**.

### ❌ When *not* to use:

* When the number of iterations is unknown or condition is dynamic (use `while` instead).

---

## 2. **`while` Loop**

### 🔹 Syntax:

```c
while (condition) {
    // code to run
}
```

### 🔹 Example:

```c
int x = 0;
while (x < 5) {
    printf("x = %d\\n", x);
    x++;
}
```

### 🔹 Use Case:

* When you **don’t know how many times** it should run.
* When the **loop depends on external conditions** (like user input or file end).

### ✅ Pros:

* Simple to use for **conditional repetition**.
* Better when initialization and increment are **not related**.

### ❌ When *not* to use:

* Avoid for fixed counts — `for` is more readable for that.
* Risk of infinite loop if you forget to update the condition variable.

---

## 3. **`do...while` Loop**

### 🔹 Syntax:

```c
do {
    // code to run
} while (condition);
```

### 🔹 Example:

```c
int x = 0;
do {
    printf("x = %d\\n", x);
    x++;
} while (x < 5);
```

### 🔹 Use Case:

* When the loop **must run at least once**, no matter the condition.
* Used in **menus**, **login prompts**, or **retry logic**.

### ✅ Pros:

* Ensures loop body runs at least once.

### ❌ When *not* to use:

* Don’t use if skipping the loop is valid (use `while` instead).
* Less readable when you're trying to avoid guaranteed execution.

---

## 🆚 Summary Table

| Feature            | `for` loop     | `while` loop   | `do...while` loop      |
| ------------------ | -------------- | -------------- | ---------------------- |
| Fixed iterations   | ✅ Best suited  | ❌ Clunky       | ❌ Avoid                |
| Unknown iterations | ❌ Not ideal    | ✅ Best suited  | ✅ Sometimes useful     |
| Executes once min. | ❌ Only if true | ❌ Only if true | ✅ Always at least once |
| Readability        | ✅ High         | ✅ Medium       | ⚠️ Lower (in misuse)   |

---

## 🧠 When To Choose Which?

* ✅ **Use `for`**:

  * Counting 1 to 100
  * Looping over arrays
  * Running a block a specific number of times

* ✅ **Use `while`**:

  * Waiting for a condition to become false (e.g. reading a file)
  * Repeating until user types "exit"
  * Monitoring sensor input

* ✅ **Use `do...while`**:

  * Showing a menu that must appear at least once
  * Retrying a failed login
  * Validating input where you want the prompt to show at least once

---

Would you like me to generate this as a `.md` file and a `.c` file with practical runnable examples for each?
