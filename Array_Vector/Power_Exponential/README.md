# Power Exponentiation

## Problem Statement

Given a base `x` and an exponent `n`, compute the value of `xⁿ`.

---

## Concept

Exponentiation is the process of repeatedly multiplying a number by itself.

### Example

```text
2³ = 2 × 2 × 2 = 8

5² = 5 × 5 = 25

3⁴ = 3 × 3 × 3 × 3 = 81
```

---

## Approaches

### 1. Brute Force

Multiply the base by itself `n` times.

#### Algorithm

1. Initialize the result as `1`.
2. Repeat `n` times:

   * Multiply the result by the base.
3. Return the final result.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

File: `Brute_Force.cpp`

---

### 2. Fast Exponentiation (Binary Exponentiation)

Use the binary representation of the exponent to reduce the number of multiplications.

#### Key Observation

If `n` is even:

```text
xⁿ = (x²)ⁿ⁄²
```

If `n` is odd:

```text
xⁿ = x × (x²)ⁿ⁻¹⁄²
```

This allows us to repeatedly square the base and halve the exponent.

#### Algorithm

1. Initialize `result = 1`.
2. While `n > 0`:

   * If `n` is odd, multiply `result` by `x`.
   * Square the base.
   * Divide the exponent by `2`.
3. Return the result.

**Time Complexity:** O(log n)

**Space Complexity:** O(1)

File: `Binary_Exponentiation.cpp`

---

## Complexity Comparison

| Approach              | Time Complexity | Space Complexity |
| --------------------- | --------------- | ---------------- |
| Brute Force           | O(n)            | O(1)             |
| Binary Exponentiation | O(log n)        | O(1)             |

---

