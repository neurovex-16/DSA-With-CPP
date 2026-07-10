# Check if it is Possible to Survive on Island

## Problem Statement

A person is stranded on an island for `S` days.

* The person requires `M` units of food every day to survive.
* A shop sells at most `N` units of food per day.
* The shop remains **closed every Sunday**.

Determine the **minimum number of days** the person must buy food to survive for all `S` days. If survival is impossible, return `-1`.

---

## Approach

This problem is solved using a **Greedy Algorithm**.

### Algorithm

1. Check if survival is possible:

   * If the maximum food that can be purchased on buying days is less than the total food required, return `-1`.
2. Calculate the number of Sundays:

   * `sundays = S / 7`
3. Calculate the available buying days:

   * `buyingDays = S - sundays`
4. Compute the total food required:

   * `totalFood = S × M`
5. Calculate the minimum number of buying days:

   * `ceil(totalFood / N)`
6. If the required buying days exceed the available buying days, return `-1`; otherwise, return the calculated value.

The greedy strategy is to purchase the **maximum possible amount of food** each day, minimizing the number of buying days.

---

## Time Complexity

* **Overall Complexity:** `O(1)`

---

## Space Complexity

* **Auxiliary Space:** `O(1)`

---

## Example

### Input

```text id="95vqcr"
S = 10
N = 16
M = 2
```

### Output

```text id="z6h4hj"
2
```

### Explanation

* Total food required:

```text id="z2b5na"
10 × 2 = 20 units
```

* Food that can be bought in one day:

```text id="qxww4r"
16 units
```

* Minimum buying days:

```text id="mwjlir"
ceil(20 / 16) = 2
```

* Sundays:

```text id="o80k9l"
10 / 7 = 1
```

* Buying days available:

```text id="qfmrna"
10 - 1 = 9
```

Since `2 ≤ 9`, survival is possible.

---

## Key Idea

* Buy **as much food as possible** whenever the shop is open.
* First verify that survival is possible by comparing the required buying days with the available buying days.
* If the required buying days exceed the available buying days, surviving on the island is impossible.

---

## Topics

* Greedy Algorithm
* Mathematics
* Simulation

---

## Platform

* GeeksforGeeks (GFG)

---

## Language

* C++
