# Shop in Candy Store (N Candies)

## Problem Statement

A candy store offers a special promotion:

* For every **one candy purchased**, you can get **at most `k` other candies for free**.

Given an array `prices[]` representing the price of each candy, determine:

1. The **minimum amount** of money required to purchase all the candies.
2. The **maximum amount** of money that could be spent while still obtaining all the candies under the offer.

Return both values as `[minimumCost, maximumCost]`.

---

## Approach

This problem is solved using a **Greedy Algorithm**.

### Minimum Cost

To minimize the total cost:

1. Sort the candy prices in **ascending order**.
2. Always buy the **cheapest available candy**.
3. For each purchased candy, take the **most expensive `k` candies for free**.
4. Repeat until all candies are obtained.

### Maximum Cost

To maximize the total cost:

1. Buy the **most expensive available candy**.
2. For each purchased candy, take the **cheapest `k` candies for free**.
3. Continue until all candies are obtained.

Sorting allows us to greedily decide which candies should be purchased and which should be obtained for free.

---

## Time Complexity

* **Sorting:** `O(n log n)`
* **Two Pointer Traversal:** `O(n)`

**Overall Complexity:** `O(n log n)`

---

## Space Complexity

* **Auxiliary Space:** `O(1)` (excluding the output vector)

---

## Example

### Input

```text
prices = [3, 2, 1, 4]
k = 2
```

### Output

```text
[3, 7]
```

### Explanation

After sorting:

```text
[1, 2, 3, 4]
```

**Minimum Cost**

* Buy `1` → Get `4` and `3` for free.
* Buy `2`.

Total Cost:

```text
1 + 2 = 3
```

**Maximum Cost**

* Buy `4` → Get `1` and `2` for free.
* Buy `3`.

Total Cost:

```text
4 + 3 = 7
```

---

## Key Idea

* **Minimum Cost:** Buy the **cheapest** candies and take the **most expensive** ones for free.
* **Maximum Cost:** Buy the **most expensive** candies and take the **cheapest** ones for free.
* Sorting combined with the **two-pointer technique** leads to an optimal greedy solution.

---

## Topics

* Greedy Algorithm
* Sorting
* Two Pointers
* Arrays

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
