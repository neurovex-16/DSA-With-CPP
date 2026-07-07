# Permutation in String

## Problem Statement

Given two strings `s1` and `s2`, return `true` if `s2` contains a permutation of `s1`. Otherwise, return `false`.

A permutation of a string is a rearrangement of all its characters.

---

## Example

```text
Input:
s1 = "ab"
s2 = "eidbaooo"

Output:
true
```

### Explanation

The substring `"ba"` is a permutation of `"ab"`.

---

## Key Observation

A permutation contains the **same characters with the same frequencies**.

Instead of generating every permutation of `s1`, compare the character frequencies of substrings in `s2` having the same length as `s1`.

---

## Approaches

### 1. Better (Hash Map)

Use a hash map to compare the frequency of every substring of length `|s1|` with the frequency of `s1`.

#### Algorithm

1. Store the frequency of characters in `s1`.
2. Generate every window of size `|s1|`.
3. Build the frequency map for the current window.
4. Compare both frequency maps.
5. Return `true` if they are identical.

**Time Complexity:** O(n × k)

*(`k` = length of `s1`)*

**Space Complexity:** O(k)

File: `Better.cpp`

---

### 2. Optimal (Sliding Window)

Maintain a sliding window of size `|s1|` and update its frequency incrementally.

#### Algorithm

1. Compute the frequency of characters in `s1`.
2. Build the frequency of the first window in `s2`.
3. Compare both frequency structures.
4. Slide the window by:

   * Removing the leftmost character.
   * Adding the next character.
5. Compare the updated frequencies after each slide.
6. Return `true` if any window matches.

**Time Complexity:** O(n)

**Space Complexity:** O(1) *(or O(k) when using a hash map)*

File: `Sliding_Window.cpp`

---

## Complexity Comparison

| Approach                 | Time Complexity | Space Complexity |
| ------------------------ | --------------- | ---------------- |
| Better (Hash Map)        | O(n × k)        | O(k)             |
| Optimal (Sliding Window) | O(n)            | O(1)             |

---

## Key Insight

Instead of rebuilding the frequency map for every substring, the Sliding Window approach updates the current window by removing one character and adding another. Since each character enters and leaves the window at most once, the algorithm achieves **O(n)** time complexity while efficiently checking for permutations.
