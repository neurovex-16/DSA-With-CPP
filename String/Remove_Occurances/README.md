# Remove All Occurrences of a Substring

## Problem Statement

Given two strings `s` and `part`, repeatedly remove the **leftmost occurrence** of `part` from `s` until it no longer exists.

Return the resulting string.

---

## Example

```text
Input:
s = "daabcbaabcbc"
part = "abc"

Output:
"dab"
```

### Explanation

```text
daabcbaabcbc
→ dabaabcbc
→ dababc
→ dab
```

The substring `"abc"` is removed repeatedly until it no longer appears in the string.

---

## Key Observation

After removing one occurrence of the substring, another occurrence may appear due to the concatenation of the remaining characters.

Therefore, continue searching and removing until the substring is no longer found.

---

## Approach

Use the built-in string functions `find()` and `erase()` repeatedly.

### Algorithm

1. Search for the substring using `find()`.
2. If found, remove it using `erase()`.
3. Repeat until `find()` returns no occurrence.
4. Return the modified string.

**Time Complexity:** O(n²) *(Worst Case)*

**Space Complexity:** O(1)

File: `Using_Find_and_Erase.cpp`

---

## Key Insight

The solution repeatedly searches for the leftmost occurrence of the target substring and removes it immediately. Although the implementation is concise and easy to understand, repeated searching and shifting of characters can increase the running time for large strings.
