
# Find Numbers with Even Number of Digits

**LeetCode #1295 | Easy | Array**

## Problem
Given an array of integers, return the number of elements that contain an even number of digits.

## Example
```text
Input:  nums = [12, 345, 2, 6, 7896]
Output: 2
```

## Approach: Digit Counting
- Iterate through each number in the array.
- Count its digits using integer division by 10.
- Check if the number of digits is even.
- Increment the counter when the condition is satisfied.

## Complexity
- Time: O(n × d)
- Space: O(1).

## What I Learned
- Counting digits using integer division.
- Using the modulo operator to check even numbers.
- Combining loops and conditional statements.
