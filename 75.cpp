class Solution {
 public:
  void sortColors(vector<int>& nums) {
    int zero = -1;
    int one = -1;
    int two = -1;

    for (const int num : nums)
      if (num == 0) {
        nums[++two] = 2;
        nums[++one] = 1;
        nums[++zero] = 0;
      } else if (num == 1) {
        nums[++two] = 2;
        nums[++one] = 1;
      } else {
        nums[++two] = 2;
      }
  }
};
Input
nums =
[2,0,2,1,1,0]
Output
[0,0,1,1,2,2]
Expected
[0,0,1,1,2,2]
