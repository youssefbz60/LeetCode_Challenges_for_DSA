
# Running Sum of 1D Array

**LeetCode #1480 | Easy | Array**

## Problem
Given an array, return a new array where each element is the sum of all elements from the beginning up to that position.

## Example
```text
Input:  [1, 2, 3, 4]
Output: [1, 3, 6, 10]
```

## Approach: Prefix Sum
- Store the first element in the result array.
- Each next element is calculated using the previous result and the current input element.

## Complexity
- Time: O(n)
- Space: O(n) (output array).

## What I Learned
- Understanding cumulative sums.
- Using previously calculated results to avoid repeated operations.
- Improving time complexity from O(n²) to O(n).
