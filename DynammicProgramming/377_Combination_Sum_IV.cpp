class Solution {
public:
    int solve(vector<int> nums,int t,vector<int> &mem){
        if(t<0)
            return 0;
        if(t==0)
            return 1;
        int s=0;
        if(mem[t]!=-1)
            return mem[t];
        for(int i=0;i<nums.size();i++){
            s+=solve(nums,t-nums[i],mem);
        }
        mem[t]=s;
        return s;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> mem(target+1,-1);
        int p=solve(nums,target,mem);
        return p;
    }
};
