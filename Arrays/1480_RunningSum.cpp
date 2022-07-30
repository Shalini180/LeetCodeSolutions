class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int l=0;
      for(int i=0;i<nums.size();i++){
          l+=nums[i];
          nums[i]=l;
      }
      return nums;
    }
};
