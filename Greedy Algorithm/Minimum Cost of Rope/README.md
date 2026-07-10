# Minimum Cost of Ropes

## Problem Statement

Given an array `arr[]` representing the lengths of different ropes, connect all the ropes into a single rope with the **minimum possible cost**.

The cost of connecting two ropes is equal to the **sum of their lengths**, and this cost is added to the total cost. After connecting two ropes, the newly formed rope can be used for subsequent connections.

Return the minimum total cost required to connect all the ropes.

---

## Approach

This problem is solved using a **Greedy Algorithm** with a **Min Heap (Priority Queue)**.

### Algorithm

1. Insert all rope lengths into a **min heap**.
2. While more than one rope remains:

   * Remove the two shortest ropes.
   * Connect them and calculate the cost.
   * Add the connection cost to the total cost.
   * Insert the newly formed rope back into the min heap.
3. When only one rope remains, return the accumulated cost.

Connecting the two shortest ropes first minimizes the cost added at each step, leading to the optimal solution.

---

## Time Complexity

* **Building Min Heap:** `O(n)`
* **Heap Operations:** `O(n log n)`

**Overall Complexity:** `O(n log n)`

---

## Space Complexity

* **Auxiliary Space:** `O(n)`

---

## Example

### Input

```text id="mjlwmq"
arr = [4, 3, 2, 6]
```

### Output

```text id="7q0lxf"
29
```

### Explanation

Initial Min Heap:

```text id="szdql9"
[2, 3, 4, 6]
```

Operations:

| Step | Ropes Connected | Cost | Total Cost |
| ---: | --------------: | ---: | ---------: |
|    1 |           2 + 3 |    5 |          5 |
|    2 |           4 + 5 |    9 |         14 |
|    3 |           6 + 9 |   15 |         29 |

Final Answer:

```text id="xjkzgc"
29
```

---

## Key Idea

* Always connect the **two shortest ropes** first.
* This greedy strategy minimizes the additional cost incurred at each step.
* A **Min Heap (Priority Queue)** efficiently retrieves the two smallest ropes in `O(log n)` time.

---

## Topics

* Greedy Algorithm
* Priority Queue (Min Heap)
* Heap
* Data Structures

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
