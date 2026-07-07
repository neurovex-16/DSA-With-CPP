# Reverse Words in a String

## Problem Statement

Given a string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters. The returned string should contain only a single space separating the words and should not have leading or trailing spaces.

---

## Example

```text
Input:
"The sky is blue"

Output:
"blue is sky The"
```

### Explanation

The words appear in reverse order while the characters within each word remain unchanged.

---

## Key Observation

Instead of moving each word individually, reverse the entire string first.

Then reverse every individual word to restore its original character order.

Finally, ignore extra spaces while constructing the answer.

---

## Approach

Reverse the complete string, then reverse each extracted word before appending it to the final result.

### Algorithm

1. Reverse the entire string.
2. Traverse the reversed string.
3. Skip extra spaces.
4. Extract one word at a time.
5. Reverse the extracted word.
6. Append it to the answer.
7. Continue until all words are processed.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

File: `Reverse_Words.cpp`

---

## Key Insight

Reversing the entire string places the words in the desired order but reverses the characters within each word. Reversing every extracted word restores the correct spelling while preserving the reversed word order. This results in an efficient linear-time solution.
