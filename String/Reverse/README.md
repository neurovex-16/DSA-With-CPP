# Reverse String

## Problem Statement

Given a string, reverse its characters **in-place** and return the reversed string.

---

## Example

```text
Input:
"Hello"

Output:
"olleH"
```

### Explanation

The first and last characters are swapped, followed by the second and second-last characters, until the entire string is reversed.

---

## Key Observation

The characters at symmetric positions from the beginning and the end of the string can be swapped simultaneously.

Using two pointers allows the string to be reversed in-place without requiring additional memory.

---

## Approach: Two Pointers

Maintain one pointer at the beginning of the string and another at the end.

### Algorithm

1. Initialize two pointers:

   * `left` at the beginning of the string.
   * `right` at the end of the string.
2. Swap the characters at `left` and `right`.
3. Increment `left` and decrement `right`.
4. Continue until `left` is no longer less than `right`.
5. The string is now reversed.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Two_Pointers.cpp`

---

## Key Insight

The Two Pointers technique efficiently reverses the string by swapping characters from both ends toward the center. Since each character is visited at most once and the reversal is performed in-place, the algorithm achieves **O(n)** time complexity while using **constant extra space**.
