class Solution {
 public:
  int search(vector<int>& nums, int target) {
    const auto it = ranges::lower_bound(nums, target);
    return (it == nums.cend() || *it != target) ? -1
                                                : distance(nums.begin(), it);
  }
};
Input
nums =
[-1,0,3,5,9,12]
target =
9
Output
4
Expected
4
