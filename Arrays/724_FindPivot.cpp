class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++)
            s+=nums[i];
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(l==s-l-nums[i])
                return i;
            l+=nums[i];
        }
        return -1;
    }
};
