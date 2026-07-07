# Find Missing and Repeated Values

## Problem Statement

Given an `n × n` matrix containing the numbers from `1` to `n²`, exactly one number appears **twice** and one number is **missing**.

Return the repeated number and the missing number.

---

## Example

```text
Input:
[
  [1, 3],
  [2, 2]
]

Output:
[2, 4]
```

### Explanation

* `2` appears twice.
* `4` is missing from the matrix.

---

## Key Observation

Since the numbers are expected to be in the range `1` to `n²`, the frequency of each number can be tracked.

* A frequency of **2** indicates the repeated number.
* A frequency of **0** indicates the missing number.

---

## Approach

Use a frequency array to count the occurrences of each number.

### Algorithm

1. Create a frequency array of size `n² + 1`.
2. Traverse the matrix and increment the frequency of each element.
3. Traverse the frequency array.
4. The element with frequency `2` is the repeated number.
5. The element with frequency `0` is the missing number.
6. Return both values.

**Time Complexity:** O(n²)

**Space Complexity:** O(n²)

File: `Frequency_Array.cpp`

---

## Key Insight

The expected values lie within a fixed range from `1` to `n²`. By recording the frequency of each value, both the repeated and missing numbers can be identified in a single pass through the frequency array, resulting in a simple and efficient solution.
