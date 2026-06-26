# Aggressive Cows

## Problem Statement

Given the positions of `n` stalls and an integer `k` representing the number of cows, place the cows in the stalls such that the **minimum distance between any two cows is maximized**.

Return the largest possible minimum distance.

---

## Example

```text
Input:
Stalls = [1, 2, 4, 8, 9]
Cows = 3

Output:
3
```

### Explanation

One optimal placement is:

```text
Cow 1 → Stall 1

Cow 2 → Stall 4

Cow 3 → Stall 8
```

The minimum distance between any two cows is **3**, which is the maximum possible.

---

## Key Observation

The answer always lies within the following range:

```text
Lower Bound = 1

Upper Bound = Maximum stall position − Minimum stall position
```

If cows can be placed with a minimum distance of `d`, they can also be placed with any smaller distance. This monotonic property makes the problem suitable for **Binary Search on the Answer**.

---

## Approach: Binary Search on Answer

Instead of searching for the arrangement directly, perform Binary Search on the minimum distance between cows.

### Algorithm

1. Sort the stall positions.
2. Set:

   * `low = 1`
   * `high = last stall position − first stall position`
3. Find the middle distance (`mid`).
4. Check whether all cows can be placed while maintaining at least `mid` distance.
5. If possible, search the right half for a larger minimum distance.
6. Otherwise, search the left half.
7. Continue until the largest feasible minimum distance is found.

**Time Complexity:** O(n log(maxDistance))

**Space Complexity:** O(1)

File: `Optimised.cpp`

---

## Key Insight

The feasibility of placing cows changes monotonically with the minimum distance. If it is possible to place all cows with a distance of `d`, it is also possible with any distance smaller than `d`. This monotonic behavior allows Binary Search to efficiently determine the maximum possible minimum distance.
