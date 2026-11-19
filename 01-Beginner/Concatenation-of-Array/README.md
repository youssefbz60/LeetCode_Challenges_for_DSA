
# Concatenation of Array

**LeetCode #1929 | Easy | Array**

## Problem
Given an integer array `nums`, return a new array containing the original elements repeated twice.

## Example
```text
Input:  nums = [1, 2, 1]
Output: [1, 2, 1, 1, 2, 1]
```

## Approach: Array Traversal
- Create a new array with twice the original size.
- Use two indices to fill both halves of the new array.
- Copy each element into its corresponding positions.

## Complexity
- Time: O(n)
- Space: O(n) (output array).

## What I Learned
- Working with dynamic memory allocation in C.
- Using two indices to fill an array.
- Creating a new array from an existing one.
