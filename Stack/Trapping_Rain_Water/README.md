# Trapping Rain Water

## Problem Statement

Given an array `height` where each element represents the height of a bar, compute the total amount of rainwater that can be trapped after raining.

---

## Example

```text
Input:
height = [0,1,0,2,1,0,1,3,2,1,2,1]

Output:
6
```

### Explanation

The bars trap a total of **6 units** of rainwater between them.

---

## Key Observation

The amount of water trapped at any index depends on:

* The tallest bar to its left.
* The tallest bar to its right.

The water trapped at index `i` is:

```text
min(Left Maximum, Right Maximum) - height[i]
```

---

## Approaches

### 1. Prefix & Suffix Maximum Arrays

Precompute the maximum height to the left and right of every index.

#### Algorithm

1. Create a prefix maximum array (`lmax`).
2. Create a suffix maximum array (`rmax`).
3. For each index:

   * Compute the trapped water as:

     * `min(lmax[i], rmax[i]) - height[i]`
4. Sum the trapped water for all indices.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Optimal_Approach_I.cpp`

---

### 2. Two Pointers (Optimal)

Maintain two pointers at both ends of the array while tracking the maximum heights seen so far.

#### Algorithm

1. Initialize two pointers:

   * `left` at the beginning.
   * `right` at the end.
2. Maintain:

   * `leftMax`
   * `rightMax`
3. Update the maximum heights.
4. Move the pointer with the smaller maximum height.
5. Add the trapped water at the current position.
6. Continue until the pointers meet.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Optimal_Approach_II.cpp`

---

## Complexity Comparison

| Approach               | Time Complexity | Space Complexity |
| ---------------------- | --------------- | ---------------- |
| Prefix & Suffix Arrays | O(n)            | O(n)             |
| Two Pointers           | O(n)            | O(1)             |

---

## Key Insight

The water trapped at each position is limited by the shorter of the tallest bars on its left and right. While the prefix and suffix array approach precomputes these values, the Two Pointers technique computes them dynamically, eliminating the need for extra memory and achieving the optimal **O(1)** auxiliary space solution.
