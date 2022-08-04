class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> a;
        for(int i=0;i<nums.size();i++){
            a.push({nums[i],i});
            if(a.size()>k)
                a.pop();
        }
        map<int,int> b;
        vector<int> d;
        while(a.size()>0){
            b[a.top().second]=a.top().first;
            a.pop();
        }
        for(auto it=b.begin();it!=b.end();it++){
            d.push_back(it->second);
        }
        return d;
    }
};
