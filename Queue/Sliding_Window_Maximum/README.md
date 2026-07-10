# Sliding Window Maximum

## Problem Statement

Given an integer array `nums[]` and an integer `k`, find the **maximum element** in every contiguous subarray (sliding window) of size `k`.

Return an array containing the maximum value for each window.

---

## Approach

This problem is solved efficiently using a **Deque (Double-Ended Queue)**.

### Algorithm

1. Maintain a deque that stores the **indices** of useful elements for the current window.
2. For each element:

   * Remove indices from the front if they are outside the current window.
   * Remove indices from the back while their corresponding values are **less than or equal to** the current element.
   * Insert the current index at the back of the deque.
3. Once the first window is formed (`i >= k - 1`), the front of the deque always contains the index of the maximum element for the current window.
4. Append this maximum to the answer.

The deque always stores indices in decreasing order of their corresponding values, ensuring the maximum is available in constant time.

---

## Time Complexity

* **Traversal:** `O(n)`

Each element is inserted and removed from the deque at most once.

**Overall Complexity:** `O(n)`

---

## Space Complexity

* **Deque:** `O(k)`

**Overall Auxiliary Space:** `O(k)`

---

## Example

### Input

```text id="s2n9fx"
nums = [1, 3, -1, -3, 5, 3, 6, 7]
k = 3
```

### Output

```text id="5sodx5"
[3, 3, 5, 5, 6, 7]
```

### Explanation

| Window      | Maximum |
| ----------- | ------: |
| [1, 3, -1]  |       3 |
| [3, -1, -3] |       3 |
| [-1, -3, 5] |       5 |
| [-3, 5, 3]  |       5 |
| [5, 3, 6]   |       6 |
| [3, 6, 7]   |       7 |

---

## Key Idea

* The deque stores **indices**, not values.
* The front of the deque always represents the maximum element of the current window.
* Remove:

  * **Expired indices** from the front.
  * **Smaller elements** from the back, since they can never become the maximum while the current element remains in the window.
* This ensures each element is processed only once, resulting in a linear-time solution.

---

## Topics

* Sliding Window
* Deque
* Queue
* Arrays
* Greedy Technique

---

## Platform

* GeeksforGeeks (GFG)
* LeetCode (#239)

---

## Language

* C++
