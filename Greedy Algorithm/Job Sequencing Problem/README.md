# Job Sequencing Problem

## Problem Statement

Given two arrays `deadline[]` and `profit[]`, where each job requires **1 unit of time** to complete, determine:

1. The **maximum number of jobs** that can be completed before their deadlines.
2. The **maximum total profit** that can be earned.

Only one job can be executed at a time, and a job contributes to the profit only if it is completed on or before its deadline.

---

## Approach

This problem is solved using a **Greedy Algorithm**.

### Algorithm

1. Pair each job with its corresponding **profit** and **deadline**.
2. Sort all jobs in **descending order of profit**.
3. Find the maximum deadline to determine the available time slots.
4. For each job:

   * Try to schedule it in the **latest available time slot** on or before its deadline.
   * If a free slot exists, schedule the job and add its profit.
5. Return the total number of scheduled jobs and the maximum profit.

Scheduling each job as late as possible preserves earlier time slots for jobs with tighter deadlines, leading to an optimal solution.

---

## Time Complexity

* **Sorting:** `O(n log n)`
* **Scheduling:** `O(n × D)`

Where `D` is the maximum deadline.

**Overall Complexity:** `O(n log n + n × D)`

> **Note:** An optimized solution using **Disjoint Set Union (DSU)** reduces the scheduling step, achieving an overall complexity of approximately `O(n log n)`.

---

## Space Complexity

* **Auxiliary Space:** `O(D)`

Where `D` is the maximum deadline.

---

## Example

### Input

```text
deadline = [2, 1, 2, 1, 1]
profit   = [100, 19, 27, 25, 15]
```

### Output

```text
Jobs Completed = 2
Maximum Profit = 127
```

### Explanation

After sorting by profit:

| Profit | Deadline |
| -----: | -------: |
|    100 |        2 |
|     27 |        2 |
|     25 |        1 |
|     19 |        1 |
|     15 |        1 |

Scheduling:

| Time Slot | Selected Job | Profit |
| --------: | -----------: | -----: |
|         1 |           27 |     27 |
|         2 |          100 |    100 |

Total Jobs Completed: **2**

Total Profit: **127**

---

## Key Idea

* Prioritize jobs with the **highest profit**.
* Schedule each selected job in the **latest possible free time slot** before its deadline.
* This greedy strategy maximizes profit while leaving earlier slots available for other jobs.

---

## Topics

* Greedy Algorithm
* Sorting
* Scheduling
* Arrays

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
