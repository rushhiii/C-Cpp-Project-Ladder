
# 🧠 C Type Conversions Cheatsheet


## 🔹 Implicit Conversions (Widening)
Happens automatically from smaller to larger types:

- `int → float → double`
- `char → int`
- Safe and automatic.

```c
int x = 10;
double d = x;  // OK
````

## 🔸 Explicit Conversions (Casting)

Forcefully change type — potentially unsafe.

```c
float f = 5.6;
int i = (int)f;  // Truncates decimal
```

## 🔸 Integer Division Warning

```c
int a = 5, b = 2;
float wrong = a / b;         // 2.0
float correct = (float)a / b;  // 2.5
```


## 🔸 Char ↔ Int

```c
char c = 'A';        // ASCII 65
int code = (int)c;   // 65
char next = (char)(code + 1); // 'B'
```



## 🔸 Data Loss Warning (Narrowing)

```c
long big = 999999;
short small = (short)big;  // May overflow
```


## 🧰 Type Sizes

Use `sizeof(type)` to verify memory size.

```c
sizeof(int)     // usually 4
sizeof(float)   // usually 4
sizeof(double)  // usually 8
sizeof(char)    // always 1
```

## 💡 Tips

* Always use casting when precision matters (e.g. float division).
* Avoid casting large values to smaller types unless necessary.
* Casting doesn’t round — it **truncates** decimals.