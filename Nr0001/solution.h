/*------------------------------------------------------------------------------
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 *
 * You may assume that each input would have exactly one solution, and you may 
 * not use the same element twice.
 *
 *----------------------------------------------------------------------------*/

#include<vector>

using std::vector;

class Solution{
  public:
    vector<int> twoSum(vector<int> &nums, int target){
      vector<int> vec;
      for(decltype(nums.size()) i = 0; i != nums.size(); ++i){
        for(int j = 0; j != i; ++j){
          if(nums[i] + nums[j] == target){
            vec.push_back(i);
            vec.push_back(j);
            return vec;
          }
          else continue;
        }
      }
      return vec;
    }
};
