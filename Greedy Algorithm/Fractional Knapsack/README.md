# Fractional Knapsack Problem

## Problem Statement

Given two arrays `value[]` and `weight[]`, where `value[i]` and `weight[i]` represent the value and weight of the **i-th item**, and an integer `capacity` representing the maximum weight the knapsack can hold, determine the **maximum total value** that can be obtained.

Unlike the 0/1 Knapsack Problem, items **can be divided into fractions**, allowing any portion of an item to be included in the knapsack.

---

## Approach

This problem is solved using a **Greedy Algorithm**.

### Algorithm

1. Compute the **value-to-weight ratio** (`value / weight`) for each item.
2. Sort all items in **descending order** of their value-to-weight ratio.
3. Traverse the sorted items:

   * If the entire item fits into the remaining capacity, include it completely.
   * Otherwise, include only the fraction that fits and stop.
4. Return the maximum total value obtained.

Choosing items with the highest value per unit weight first guarantees the optimal solution.

---

## Time Complexity

* **Sorting:** `O(n log n)`
* **Traversal:** `O(n)`

**Overall Complexity:** `O(n log n)`

---

## Space Complexity

* **Auxiliary Space:** `O(n)` (for storing items with their value-to-weight ratios)

---

## Example

### Input

```text
value    = [60, 100, 120]
weight   = [10, 20, 30]
capacity = 50
```

### Output

```text
240.0
```

### Explanation

| Item | Value | Weight | Value/Weight |
| ---- | ----: | -----: | -----------: |
| 1    |    60 |     10 |          6.0 |
| 2    |   100 |     20 |          5.0 |
| 3    |   120 |     30 |          4.0 |

Selection:

* Take Item 1 completely → Value = 60
* Take Item 2 completely → Value = 100
* Remaining capacity = 20
* Take **2/3 of Item 3** → Value = 80

Total Value:

```text
60 + 100 + 80 = 240.0
```

---

## Key Idea

* Prioritize items with the **highest value per unit weight**.
* If an item cannot fit completely, take only the fraction that fits.
* This greedy strategy is **optimal** because each unit of remaining capacity is filled with the maximum possible value.

---

## Topics

* Greedy Algorithm
* Sorting
* Arrays
* Optimization

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
