# Problem: Small Triangles, Large Triangles

## 📖 Description
You are given the lengths of the sides of multiple triangles.  
The task is to **sort the triangles in ascending order of their areas**.
---

## 💡 Concept
The sorting is implemented using the **Bubble Sort** algorithm.  
---

## 🖥️ Solution Code

```c
#include <stdio.h>
#include <math.h>

void sort_by_area(triangle* tr, int n) {
    float area[n];

    // Step 1: Calculate area for each triangle
    for (int i = 0; i < n; i++) {
        float p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        float s = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
        area[i] = s; 
    }

    // Step 2: Bubble Sort based on area
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (area[j] > area[j + 1]) {
                // Swap areas
                float temp = area[j];
                area[j] = area[j + 1];
                area[j + 1] = temp;

                // Swap corresponding triangle sides
                int trTemp_a = tr[j].a;
                tr[j].a = tr[j + 1].a;
                tr[j + 1].a = trTemp_a;

                int trTemp_b = tr[j].b;
                tr[j].b = tr[j + 1].b;
                tr[j + 1].b = trTemp_b;

                int trTemp_c = tr[j].c;
                tr[j].c = tr[j + 1].c;
                tr[j + 1].c = trTemp_c;
            }
        }
    }
}
```
