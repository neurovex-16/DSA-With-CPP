# Next Greater Element

## Problem Statement

Given an array of integers, the **Next Greater Element (NGE)** of an element is the first element greater than it that appears to its right.

If no such element exists, the answer is `-1`.

This folder includes the following variations:

* **Next Greater Element** (General Problem)
* **Next Greater Element I (LeetCode 496)**
* **Next Greater Element II (LeetCode 503)**

---

## Example

```text id="sqorjq"
Input:
[2, 1, 2, 4, 3]

Output:
[4, 2, 4, -1, -1]
```

### Explanation

* Next greater of `2` is `4`.
* Next greater of `1` is `2`.
* Next greater of the second `2` is `4`.
* `4` has no greater element.
* `3` has no greater element.

---

## Key Observation

For every element, we need to find the **first greater element on its right**.

A **Monotonic Decreasing Stack** efficiently keeps track of candidate elements, allowing each element to be processed only once.

---

## Approaches

### 1. Next Greater Element (General)

Find the next greater element for every element in the array.

#### Algorithm

1. Traverse the array from right to left.
2. Maintain a monotonic decreasing stack.
3. Remove all elements smaller than or equal to the current element.
4. If the stack is not empty, its top is the next greater element.
5. Push the current element onto the stack.
6. Repeat for all elements.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Next_Greater_Element.cpp`

---

### 2. Next Greater Element I

Given two arrays `nums1` and `nums2`, find the next greater element for each element in `nums1` based on its position in `nums2`.

#### Algorithm

1. Compute the next greater element for every element in `nums2` using a monotonic stack.
2. Store the mapping:

   * `element → next greater element`
3. Traverse `nums1` and retrieve the corresponding answers from the map.

**Time Complexity:** O(n + m)

*(`n` = size of `nums1`, `m` = size of `nums2`)*

**Space Complexity:** O(m)

File: `Next_Greater_Element_I.cpp`

---

### 3. Next Greater Element II

Given a **circular array**, find the next greater element for every element.

#### Algorithm

1. Traverse the array twice from right to left.
2. Use `i % n` to simulate circular indexing.
3. Maintain a monotonic decreasing stack.
4. Remove elements smaller than or equal to the current element.
5. The top of the stack represents the next greater element.
6. Push the current index onto the stack.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Next_Greater_Element_II.cpp`

---

## Complexity Comparison

| Problem                 | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Next Greater Element    | O(n)            | O(n)             |
| Next Greater Element I  | O(n + m)        | O(m)             |
| Next Greater Element II | O(n)            | O(n)             |

---

## Key Insight

All variations of the **Next Greater Element** problem are efficiently solved using a **Monotonic Decreasing Stack**. The stack maintains candidate elements in decreasing order, allowing the next greater element to be found in constant amortized time. While the core idea remains the same, each variation introduces additional requirements such as mapping elements between arrays or handling circular traversal.
