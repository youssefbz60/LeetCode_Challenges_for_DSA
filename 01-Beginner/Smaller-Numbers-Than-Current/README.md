
# How Many Numbers Are Smaller Than the Current Number

**LeetCode #1365 | Easy | Array**

## Problem
Given an array of integers, return a new array where each element represents the number of values smaller than the corresponding element in the original array.

## Example
```text
Input:  nums = [8, 1, 2, 2, 3]
Output: [4, 0, 1, 1, 3]
```

## Approach: Brute Force
- Iterate through each element in the array.
- Compare it with all other elements.
- Count how many elements are smaller.
- Store the count in the result array.

## Complexity
- Time: O(n²)
- Space: O(n) (output array).

## What I Learned
- Comparing elements using nested loops.
- Counting elements that satisfy a condition.
- Building a result array using dynamic memory allocation.
