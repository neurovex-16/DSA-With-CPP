# Valid Palindrome

## Problem Statement

Given a string `s`, determine whether it is a palindrome after converting all uppercase letters to lowercase and removing all non-alphanumeric characters.

Return `true` if the string is a palindrome; otherwise, return `false`.

---

## Example

```text
Input:
s = "A man, a plan, a canal: Panama"

Output:
true
```

### Explanation

After removing non-alphanumeric characters and converting to lowercase:

```text
amanaplanacanalpanama
```

The string reads the same forwards and backwards.

---

## Key Observation

A palindrome reads the same from both directions.

Using two pointers—one starting from the beginning and the other from the end—we can compare corresponding characters while skipping all non-alphanumeric characters.

---

## Approach: Two Pointers

Use two pointers to compare characters from both ends of the string.

### Algorithm

1. Initialize one pointer at the beginning and another at the end of the string.
2. Skip all non-alphanumeric characters.
3. Convert both characters to lowercase.
4. Compare the characters.
5. If they differ, return `false`.
6. Otherwise, move both pointers toward the center.
7. Continue until the pointers meet.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Two_Pointers.cpp`

---

## Key Insight

The Two Pointers technique allows the palindrome check to be performed in a single traversal while ignoring non-alphanumeric characters and case differences. This results in an efficient **O(n)** solution with constant extra space.
