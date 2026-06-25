# Peak Index in a Mountain Array

## Problem Statement

Given a mountain array, return the index of its peak element.

A mountain array is an array where:

* The elements strictly increase to a peak.
* The elements strictly decrease after the peak.

It is guaranteed that the array contains exactly one peak.

---

## Example

```text
Input:
[0, 2, 5, 3, 1]

Output:
2
```

### Explanation

```text
The peak element is 5, located at index 2.
```

---

## What is a Mountain Array?

A mountain array satisfies the following condition:

```text
arr[0] < arr[1] < ... < arr[i]
arr[i] > arr[i+1] > ... > arr[n-1]
```

where `i` is the peak index.

Example:

```text
1  3  7  10  8  5  2
         ▲
      Peak Element
```

---

## Key Observation

At any index `mid`:

* If `arr[mid] < arr[mid + 1]`, the peak lies on the **right**.
* Otherwise, the peak lies on the **left** (including `mid`).

This property allows Binary Search to eliminate half of the search space in every iteration.

---

## Approaches

### 1. Brute Force

Traverse the array and find the element that is greater than both of its neighbors.

#### Algorithm

1. Iterate through the array.
2. Check whether the current element is greater than its adjacent elements.
3. Return its index.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Binary Search (Optimal)

Use Binary Search to locate the peak element.

#### Algorithm

1. Find the middle element.
2. Compare it with its next element.
3. If the slope is increasing, move to the right half.
4. Otherwise, move to the left half (including the middle).
5. Continue until the search space contains only one element.

**Time Complexity:** O(log n)

**Space Complexity:** O(1)

File: `Optimised.cpp`

---

## Complexity Comparison

| Approach      | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Brute Force   | O(n)            | O(1)             |
| Binary Search | O(log n)        | O(1)             |

---

## Key Insight

A mountain array always has exactly one peak. By observing whether the current position lies on the increasing or decreasing slope, Binary Search efficiently narrows down the search space until the peak is found.
