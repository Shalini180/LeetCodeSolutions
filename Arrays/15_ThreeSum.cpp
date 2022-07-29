class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n=nums.size();
        if(n<3)
            return {};
        set<vector<int>> a;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int s=nums[i]+nums[j]+nums[k];
                if(s==0)
                {
                    a.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(s<0)
                    j++;
                else if(s>0)
                    k--;
            }
        }
        vector<vector<int>> b;
        for(auto x:a){
            b.push_back(x);
        }
        return b;
    }
};
