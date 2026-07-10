# Gas Station Problem

## Problem Statement

There are `n` gas stations arranged in a circular route. Two arrays are given:

* `gas[]` — the amount of gas available at each station.
* `cost[]` — the amount of gas required to travel from the current station to the next station.

Determine the starting gas station's index from which you can complete the entire circuit exactly once in the clockwise direction. If it is impossible to complete the circuit, return `-1`.

---

## Approach

This problem is solved using a **Greedy Algorithm**.

### Algorithm

1. Compute the total amount of gas and the total travel cost.
2. If the total gas is less than the total cost, completing the circuit is impossible. Return `-1`.
3. Traverse all stations while maintaining the current fuel balance.
4. If the current balance becomes negative:

   * The current starting station cannot complete the journey.
   * Reset the balance to `0`.
   * Set the next station as the new starting point.
5. After completing the traversal, return the starting station.

The greedy strategy works because if the fuel balance becomes negative at station `i`, then no station between the current start and `i` can be a valid starting point.

---

## Time Complexity

* **Traversal:** `O(n)`

**Overall Complexity:** `O(n)`

---

## Space Complexity

* **Auxiliary Space:** `O(1)`

---

## Example

### Input

```text
gas  = [1, 2, 3, 4, 5]
cost = [3, 4, 5, 1, 2]
```

### Output

```text
3
```

### Explanation

Starting from station `3`:

| Station | Gas Gained | Cost | Fuel Remaining |
| ------: | ---------: | ---: | -------------: |
|       3 |         +4 |   -1 |              3 |
|       4 |         +5 |   -2 |              6 |
|       0 |         +1 |   -3 |              4 |
|       1 |         +2 |   -4 |              2 |
|       2 |         +3 |   -5 |              0 |

The vehicle successfully completes the entire circuit.

---

## Key Idea

* If the **total gas** is less than the **total cost**, completing the circuit is impossible.
* Whenever the current fuel balance becomes negative, discard the current starting station and all stations visited so far as potential starting points.
* The first station after a failure becomes the next candidate.
* This greedy approach guarantees the correct answer in a single traversal.

---

## Topics

* Greedy Algorithm
* Arrays
* Prefix Sum
* Simulation

---

## Platform

* GeeksforGeeks (GFG)
* LeetCode (#134)

---

## Language

* C++
