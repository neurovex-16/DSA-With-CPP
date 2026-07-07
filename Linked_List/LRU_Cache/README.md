# LRU Cache

## Problem Statement

Design a data structure that follows the constraints of a **Least Recently Used (LRU) Cache**.

Implement the following operations:

* `LRUCache(int capacity)` – Initialize the cache with a positive capacity.
* `get(key)` – Return the value associated with the key if it exists; otherwise, return `-1`.
* `put(key, value)` – Insert or update the key-value pair. If the cache exceeds its capacity, remove the **least recently used** item.

Both operations must run in **O(1)** average time.

---

## Example

```text
Operations:

LRUCache cache(2)

put(1, 1)
put(2, 2)
get(1)    → 1
put(3, 3)
get(2)    → -1
put(4, 4)
get(1)    → -1
get(3)    → 3
get(4)    → 4
```

---

## Key Observation

To achieve **O(1)** time complexity for both `get()` and `put()`, two data structures are combined:

* **Hash Map** for constant-time key lookup.
* **Doubly Linked List** for constant-time insertion, deletion, and updating the order of recently used elements.

The **front** of the list stores the most recently used (MRU) item, while the **back** stores the least recently used (LRU) item.

---

## Approach

Combine a hash map with a doubly linked list.

### Algorithm

#### get(key)

1. Check if the key exists in the hash map.
2. If it does not exist, return `-1`.
3. Otherwise:

   * Move the corresponding node to the front of the list.
   * Return its value.

#### put(key, value)

1. If the key already exists:

   * Update its value.
   * Move the node to the front.
2. Otherwise:

   * If the cache is full:

     * Remove the node at the back (Least Recently Used).
     * Remove its entry from the hash map.
   * Create a new node.
   * Insert it at the front.
   * Store its address in the hash map.

**Time Complexity:**

* `get()` → O(1)
* `put()` → O(1)

**Space Complexity:** O(capacity)

File: `LRU_Cache.cpp`

---

## Key Insight

The hash map provides direct access to cache entries, while the doubly linked list maintains the order of usage. Whenever a key is accessed or updated, it is moved to the front of the list. When the cache reaches its capacity, the node at the back—representing the least recently used item—is removed. This combination ensures that all required operations are performed in constant time.
