# Chocolate Distribution Problem

## Problem Statement

Given an array `arr[]` representing the number of chocolates in different packets and an integer `m` representing the number of students, distribute exactly one packet to each student such that the **difference between the maximum and minimum chocolates received is minimized**.

Return the minimum possible difference.

---

## Approach

This problem is solved using a **Sorting + Sliding Window (Greedy)** approach.

### Algorithm

1. Sort the array in **ascending order**.
2. Consider every contiguous subarray (window) of size `m`.
3. For each window, calculate:

   * **Difference = Maximum packet − Minimum packet**
4. Keep track of the minimum difference among all possible windows.
5. Return the minimum difference.

Sorting ensures that every valid group of `m` packets appears as a contiguous window.

---

## Time Complexity

* **Sorting:** `O(n log n)`
* **Sliding Window Traversal:** `O(n)`

**Overall Complexity:** `O(n log n)`

---

## Space Complexity

* **Auxiliary Space:** `O(1)` (excluding the sorting algorithm's internal space)

---

## Example

### Input

```text
arr = [3, 4, 1, 9, 56, 7, 9, 12]
m = 5
```

### Output

```text
6
```

### Explanation

After sorting:

```text
[1, 3, 4, 7, 9, 9, 12, 56]
```

Possible windows of size `5`:

```text
[1, 3, 4, 7, 9]   → Difference = 8
[3, 4, 7, 9, 9]   → Difference = 6
[4, 7, 9, 9, 12]  → Difference = 8
[7, 9, 9, 12, 56] → Difference = 49
```

The minimum difference is:

```text
6
```

---

## Key Idea

* Sort the packets so similar-sized packets become adjacent.
* The optimal distribution will always be found within a **contiguous window of size `m`**.
* Check every possible window and choose the one with the smallest difference.

---

## Topics

* Greedy Algorithm
* Sorting
* Sliding Window
* Arrays

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
