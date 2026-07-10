# First Unique Character in a String (Using Queue)

## Problem Statement

Given a string `s`, find the **first non-repeating (unique) character** in the string.

The solution uses a **Queue** to efficiently track characters in the order they appear while maintaining their frequencies.

---

## Approach

This problem is solved using a combination of a **Queue** and a **Frequency Array (Hashing)**.

### Algorithm

1. Initialize a frequency array of size `26` (or an unordered map for general characters).
2. Traverse the string:

   * Increment the frequency of the current character.
   * Push the character into the queue.
3. While the queue is not empty:

   * If the character at the front of the queue has a frequency greater than `1`, remove it.
   * Otherwise, the front of the queue is the first unique character.
4. If the queue becomes empty, no unique character exists.

The queue preserves the insertion order, while the frequency array identifies whether a character is unique.

---

## Time Complexity

* **Traversal:** `O(n)`
* **Queue Operations:** `O(n)` (each character is inserted and removed at most once)

**Overall Complexity:** `O(n)`

---

## Space Complexity

* **Queue:** `O(n)`
* **Frequency Array:** `O(1)` (26 lowercase letters)

**Overall Auxiliary Space:** `O(n)`

---

## Example

### Input

```text id="lmmwrl"
s = "aabcbd"
```

### Process

| Character | Queue | First Unique |
| --------- | ----- | ------------ |
| a         | a     | a            |
| a         | a a   | None         |
| b         | b     | b            |
| c         | b c   | b            |
| b         | c     | c            |
| d         | c d   | c            |

### Output

```text id="6mjlwm"
c
```

---

## Key Idea

* The **frequency array** determines whether a character is unique.
* The **queue** maintains the order in which characters appear.
* Remove characters from the front of the queue until the front represents a character with a frequency of `1`.
* Since each character is added and removed at most once, the algorithm runs in linear time.

---

## Topics

* Queue
* Hashing
* Strings
* Arrays

---

## Platform

* Queue-Based String Processing
* GeeksforGeeks (Related)
* LeetCode (Related Concepts)

---

## Language

* C++
