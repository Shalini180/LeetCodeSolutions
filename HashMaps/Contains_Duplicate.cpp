class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]+=1;
        }
        for(auto it=a.begin();it!=a.end();it++){
            if(it->second>1)
            return true;
        }
        return false;
    }
};
