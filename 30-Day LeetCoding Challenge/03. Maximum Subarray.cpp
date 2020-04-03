class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    long long res = nums[0];
    long long local_res = 0;
    for (int num : nums) {
      local_res = max(local_res + num, (long long)num);
      res = max(res, local_res);
    }
    return res;
  }
};