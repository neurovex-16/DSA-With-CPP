# Previous Smaller Element

## Problem Statement

Given an array of integers, find the **previous smaller element** for every element in the array.

The previous smaller element of an element is the **nearest element to its left** that is strictly smaller than the current element. If no such element exists, return `-1`.

---

## Example

```text id="tiz03s"
Input:
[4, 5, 2, 10, 8]

Output:
[-1, 4, -1, 2, 2]
```

### Explanation

```text id="b93g3m"
4  → No smaller element on the left → -1

5  → Previous smaller is 4

2  → No smaller element on the left → -1

10 → Previous smaller is 2

8  → Previous smaller is 2
```

---

## Key Observation

For each element, we need the **nearest smaller element on its left**.

A **Monotonic Increasing Stack** efficiently maintains candidate elements, allowing each element to be processed only once.

---

## Approach: Monotonic Stack

Maintain a stack that stores elements in increasing order.

### Algorithm

1. Initialize an empty stack.
2. Traverse the array from left to right.
3. While the stack is not empty and the top element is greater than or equal to the current element, pop the stack.
4. If the stack becomes empty, the previous smaller element is `-1`.
5. Otherwise, the top of the stack is the previous smaller element.
6. Push the current element onto the stack.
7. Repeat until all elements are processed.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Monotonic_Stack.cpp`

---

## Key Insight

Each element is pushed onto the stack once and popped at most once. The monotonic stack maintains only useful candidates for future elements, enabling the previous smaller element for every array element to be found in **linear time**.
