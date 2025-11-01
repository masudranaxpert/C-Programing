# C ম্যাথ ফাংশন - Round, Ceil, Floor

## 📌 Overview
`math.h` লাইব্রেরিতে থাকা তিনটি গুরুত্বপূর্ণ ফাংশন যা দশমিক সংখ্যাকে পূর্ণসংখ্যায় রূপান্তর করে।

---

## 🔧 Functions

### 1. `round()` - নিকটতম পূর্ণসংখ্যা
```c
double round(double x);
```
**কাজ:** সবচেয়ে কাছের পূর্ণসংখ্যায় নিয়ে যায়।

**উদাহরণ:**
```c
round(4.3)  → 4
round(4.5)  → 5
round(4.7)  → 5
round(-4.5) → -5
```

---

### 2. `ceil()` - উপরে তোলা
```c
double ceil(double x);
```
**কাজ:** সবসময় উপরের দিকে নিয়ে যায়।

**উদাহরণ:**
```c
ceil(4.1)  → 5
ceil(4.9)  → 5
ceil(-4.9) → -4
ceil(5.0)  → 5
```

---

### 3. `floor()` - নিচে নামানো
```c
double floor(double x);
```
**কাজ:** সবসময় নিচের দিকে নিয়ে যায়।

**উদাহরণ:**
```c
floor(4.1)  → 4
floor(4.9)  → 4
floor(-4.1) → -5
floor(5.0)  → 5
```

---

## 💻 Complete Code Example
```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 4.6;
    
    printf("Original: %.1f\n", num);
    printf("round(): %.0f\n", round(num));
    printf("ceil():  %.0f\n", ceil(num));
    printf("floor(): %.0f\n", floor(num));
    
    return 0;
}
```

**Output:**
```
Original: 4.6
round(): 5
ceil():  5
floor(): 4
```

---

## 🎯 Quick Reference

| Function | 4.3 | 4.5 | 4.7 | -4.5 |
|----------|-----|-----|-----|------|
| `round()` | 4   | 5   | 5   | -5   |
| `ceil()`  | 5   | 5   | 5   | -4   |
| `floor()` | 4   | 4   | 4   | -5   |

---

## ⚠️ Important Notes

- **Include করতে হবে:** `#include <math.h>`
- **Compile করার সময়:** `-lm` flag লাগতে পারে (Linux/Mac)
```bash
  gcc program.c -lm
```
- **Return type:** সবগুলোই `double` রিটার্ন করে

---

## 📝 Use Cases

- **round():** গড় হিসাব, রাউন্ডিং
- **ceil():** পেজ নাম্বার, সিট বরাদ্দ
- **floor():** ডিসকাউন্ট, টাইম ক্যালকুলেশন
