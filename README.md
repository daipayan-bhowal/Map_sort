# Map Sort Algorithm

A non-comparison based sorting algorithm using STL map

## Overview
Map Sort is a simple sorting algorithm that uses a map (or hash map) to sort an array of integers. The algorithm works by:
1. Finding the minimum and maximum elements in the input array.
2. Marking the presence of each element in a map.
3. Reconstructing the sorted array by iterating from the minimum to the maximum element and checking the map for the presence of each element.

This algorithm is efficient for small ranges of integers but may not be suitable for large datasets or wide ranges due to its space complexity.

---

## Features
- **Simple Implementation:** Easy to understand and implement.
- **Efficient for Small Ranges:** Works well when the range of input values is small.
- **Stable Sorting:** Maintains the relative order of equal elements.

---

## Time and Space Complexity
- **Time Complexity:** O(n + k), where:
  - `n` is the number of elements in the input array.
  - `k` is the range of values (`maxElement - minElement + 1`).
- **Space Complexity:** O(k), where `k` is the range of values.

---

## Code Implementation
The algorithm is implemented in C++. Below is the code:

```cpp
#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

void map_sort(vector<int> &nums) {
    map<int, bool> mp;
    int maxElement = INT_MIN;
    int minElement = INT_MAX;

    // Step 1: Find min and max elements and mark presence in the map
    for (int num : nums) {
        if (num > maxElement) maxElement = num;
        if (num < minElement) minElement = num;
        mp[num] = true;
    }

    // Step 2: Reconstruct the sorted array
    int j = 0;
    for (int i = minElement; i <= maxElement; i++) {
        if (mp[i]) {
            nums[j++] = i;
        }
    }
}

int main() {
    vector<int> nums = {77, 55, 66, 44, 11, 89};
    map_sort(nums);

    // Print the sorted array
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
