# Maximum Meetings in One Room

## Problem Statement

Given two arrays `start[]` and `end[]`, where `start[i]` and `end[i]` represent the start and end times of the **i-th meeting**, determine the **maximum number of meetings** that can be accommodated in a single meeting room.

A meeting can only be scheduled if its start time is **strictly greater than** the end time of the previously selected meeting.

---

## Approach

This problem is solved using a **Greedy Algorithm**.

### Algorithm

1. Store each meeting along with its start time, end time, and original index.
2. Sort all meetings in **ascending order of their ending times**.
3. Select the first meeting.
4. Traverse the remaining meetings:

   * If the current meeting's start time is **greater than** the end time of the last selected meeting, select it.
5. Return the total number (or indices) of selected meetings.

Choosing the meeting that finishes earliest maximizes the remaining available time for scheduling future meetings.

---

## Time Complexity

* **Sorting:** `O(n log n)`
* **Traversal:** `O(n)`

**Overall Complexity:** `O(n log n)`

---

## Space Complexity

* **Auxiliary Space:** `O(n)` (for storing meeting information)

---

## Example

### Input

```text
start = [1, 3, 0, 5, 8, 5]
end   = [2, 4, 6, 7, 9, 9]
```

### Output

```text
4
```

### Explanation

After sorting by end time:

| Meeting | Start | End |
| ------: | ----: | --: |
|       1 |     1 |   2 |
|       2 |     3 |   4 |
|       3 |     0 |   6 |
|       4 |     5 |   7 |
|       5 |     8 |   9 |
|       6 |     5 |   9 |

Selected meetings:

```text
(1,2) → (3,4) → (5,7) → (8,9)
```

Maximum meetings that can be held:

```text
4
```

---

## Key Idea

* Always select the meeting that **ends the earliest**.
* After selecting a meeting, choose the next meeting whose start time is **strictly greater** than the end time of the last selected meeting.
* This greedy strategy ensures the maximum number of non-overlapping meetings can be scheduled.

---

## Topics

* Greedy Algorithm
* Sorting
* Scheduling
* Intervals

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
