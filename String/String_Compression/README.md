# String Compression

## Problem Statement

Given an array of characters `chars`, compress it **in-place** using the following rules:

* Consecutive repeated characters are replaced by the character followed by its count.
* If a character appears only once, it is left unchanged.
* The compressed result must be stored in the original array.

Return the new length of the compressed array.

---

## Example

```text
Input:
['a', 'a', 'b', 'b', 'c', 'c', 'c']

Output:
['a', '2', 'b', '2', 'c', '3']

Length:
6
```

### Explanation

The compressed array becomes:

```text
a2b2c3
```

---

## Key Observation

Repeated consecutive characters can be processed as a single group.

Instead of creating a new array, overwrite the original array while maintaining a separate write index.

---

## Approach

Traverse the array, count consecutive occurrences of each character, and write the compressed representation back into the original array.

### Algorithm

1. Initialize a write pointer.
2. Traverse the array character by character.
3. Count the frequency of each consecutive group.
4. Write the character to the current write position.
5. If the frequency is greater than `1`, write each digit of the count.
6. Resize the array to the final compressed length.
7. Return the new length.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `String_Compression.cpp`

---

## Key Insight

The algorithm processes each group of consecutive characters exactly once while writing the compressed result back into the original array. Using separate read and write pointers enables in-place compression with constant extra space.
