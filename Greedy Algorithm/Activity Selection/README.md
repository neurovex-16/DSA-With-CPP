# Activity Selection Problem

## Problem Statement

Given two arrays `start[]` and `finish[]`, where `start[i]` and `finish[i]` represent the starting and ending times of the **i-th activity**, determine the **maximum number of non-overlapping activities** that can be performed by a single person.

Only one activity can be performed at a time.

---

## Approach

This problem is solved efficiently using a **Greedy Algorithm**.

### Algorithm

1. Pair each activity with its start and finish times.
2. Sort all activities in **ascending order of their finishing time**.
3. Select the first activity.
4. Iterate through the remaining activities:

   * If an activity starts **after or at** the finish time of the last selected activity, select it.
5. Count the total selected activities.

The greedy choice of always selecting the activity that finishes earliest leaves the maximum possible time for future activities.

---

## Time Complexity

* **Sorting:** `O(n log n)`
* **Traversal:** `O(n)`

**Overall Complexity:** `O(n log n)`

---

## Space Complexity

* **Auxiliary Space:** `O(n)` (for storing activities)

---

## Example

### Input

```text
start  = [1, 3, 0, 5, 8, 5]
finish = [2, 4, 6, 7, 9, 9]
```

### Output

```text
4
```

### Selected Activities

```text
(1,2), (3,4), (5,7), (8,9)
```

---

## Key Idea

* Always choose the activity that **finishes earliest**.
* This greedy strategy maximizes the remaining available time, allowing more activities to be selected.

---

## Topics

* Greedy Algorithm
* Sorting
* Intervals
* Scheduling Problems

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
