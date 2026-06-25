# Product of Array Except Self

## Problem Statement

Given an integer array `nums`, return an array `answer` such that:

```text
answer[i] = product of all elements of nums except nums[i]
```

The solution must run in **O(n)** time **without using the division operator**.

---

## Example

```text
Input:
nums = [1, 2, 3, 4]

Output:
[24, 12, 8, 6]
```

### Explanation

```text
answer[0] = 2 × 3 × 4 = 24

answer[1] = 1 × 3 × 4 = 12

answer[2] = 1 × 2 × 4 = 8

answer[3] = 1 × 2 × 3 = 6
```

---

## Key Observation

The product for each index can be expressed as:

```text
Product of all elements before the current index
×
Product of all elements after the current index
```

Instead of recalculating these products for every element, compute them efficiently using prefix and suffix products.

---

## Approaches

### 1. Brute Force

Calculate the product for every index by multiplying all other elements.

#### Algorithm

1. Traverse each index.
2. Multiply every element except the current one.
3. Store the result.
4. Repeat for all indices.

**Time Complexity:** O(n²)

**Space Complexity:** O(1) *(excluding the output array)*

File: `Brute_Force.cpp`

---

### 2. Optimized Prefix & Suffix

Store prefix products in the output array and compute suffix products using a single variable.

#### Algorithm

1. Store the prefix product for every index in the output array.
2. Traverse the array from right to left while maintaining a suffix product.
3. Multiply the current answer by the suffix product.
4. Update the suffix product.

**Time Complexity:** O(n)

**Space Complexity:** O(1) *(excluding the output array)*

File: `Optimized.cpp`

---

## Complexity Comparison

| Approach                  | Time Complexity | Space Complexity |
| ------------------------- | --------------- | ---------------- |
| Brute Force               | O(n²)           | O(1)             |
| Optimized Prefix & Suffix | O(n)            | O(1)             |

---

## Key Insight

Instead of recomputing the product for every index, maintain the product of elements before and after each position. By storing prefix products in the output array and calculating suffix products during a reverse traversal, the solution achieves linear time while using only constant extra space (excluding the output array).
