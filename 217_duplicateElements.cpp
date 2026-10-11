// brute force approach-
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] == nums[j])
          return true;
      }
    }
    return false;
  }
};

// SORTING AND COMPARING - sort in ascending order and then compare the neighboring
// to overcome the overflow comflow condition check i with i-1; starting of the loop: i=1
class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] == nums[i - 1])
        return true;
    }
    return false;
  }
};