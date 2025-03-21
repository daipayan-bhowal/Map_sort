# Map Sort Algorithm

A non-comparison based sorting algorithm using hashmap datastructure

## Overview
Map Sort is a simple sorting algorithm that uses a map (or hash map) to sort an array of integers. The algorithm works by:
1. Finding the minimum and maximum elements in the input array.
2. Marking the presence of each element in a map.
3. Reconstructing the sorted array by iterating from the minimum to the maximum element and checking the map for the presence of each element.

This algorithm is efficient for small ranges of integers but may not be suitable for wide ranges(more than 16 bit integers) due to its space complexity
and also efficient for large datasets like 1000s of elements with comparision to QuickSort due to it's better timecomplexity of O(n+k)

---

## Features
- **Simple Implementation:** Easy to understand and implement.
- **Efficient for Small Ranges:** Works well when the range of input values is small.
- **Stable Sorting:** Maintains the relative order of equal elements.

---

## How to Run the Code
1. Ensure you have a C++ compiler installed (e.g., g++ or any IDE that supports C++).
2. Download the Map_sort.cpp file from the repository.
3. Open a terminal or command prompt.
4. Navigate to the directory where Map_sort.cpp is located.
5. Compile the code using the following command:
   ```bash
     g++ Map_sort.cpp -o MapSort
6. Run the compiled program with:
   ```bash
    ./MapSort

## Example Input and Output

- **Input:**
    `vector<int> nums = {77, 55, 66, 44, 11, 89};`
- **Output:**
    `11 44 55 66 77 89`

---

## Time and Space Complexity
- **Time Complexity:** O(n + k) (for array version) and
                       O(n log n + k log k) (for std::map version), where:
  - `n` is the number of elements in the input array.
  - `k` is the range of values (`maxElement - minElement + 1`).
  -  O(log n) is required for insertion of each elements inside the std::map
  -  O(1) is required for insertion of 1 element in case of array
- **Space Complexity:** O(k), where `k` is the range of values.

---

## Advantages

- **Optimized for Larger Dataset:**
The algorithm is faster than quicksort in case of large array size example:- if array has 1000 elements or more of 16 bit integers as Time complexity is O(n) instead of O(n log n) 

---

## Limitations
- **Range Dependency:**
The algorithm is inefficient for Big Integers(greater than 16 bit ints), as it requires iterating from minElement to maxElement.

- **Space Usage:**
The space complexity depends on the range of values, making it unsuitable for datasets with a wide range of integers.

- **Integer-Only:**
The algorithm works only for integer values. It cannot handle floating-point numbers or other data types.

---

## Applications
- **Small Datasets:** Ideal for sorting small datasets with a limited range of values.
- **Educational Purposes:** Useful for understanding basic sorting algorithms and map-based data structures.

---

## Pseudocode
Below is the pseudocode for the Map Sort algorithm:

```plaintext
FUNCTION map_sort(nums):
    // Step 1: Initialize variables
    mp = empty map (key: integer, value: boolean)
    maxElement = -∞
    minElement = +∞

    // Step 2: Find min and max elements in the input vector
    FOR EACH num IN nums:
        IF num > maxElement:
            maxElement = num
        IF num < minElement:
            minElement = num
        // Mark the presence of the element in the map
        mp[num] = true

    // Step 3: Reconstruct the sorted array using the map
    j = 0
    FOR i = minElement TO maxElement:
        IF mp[i] is true:
            nums[j] = i
            j = j + 1

    // Step 4: The vector 'nums' is now sorted
    RETURN
