/*
 * LeetCode Problem: 704. Binary Search
 * Difficulty: Easy
 * Topics: Array, Binary Search
 * Date Solved: 06/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (target == nums[mid])
        return mid;
      else if (target > nums[mid])
        left = mid + 1;
      else
        right = mid - 1;
    }

    return -1;
  }
};