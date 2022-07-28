vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]+=1;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> m;
        for(auto it=a.begin();it!=a.end();it++){
            m.push({it->second,it->first});
            if(m.size()>k)
                m.pop();
        }
        vector<int> c;
        while(m.size()>0){
            c.push_back(m.top().second);
            m.pop();
        }
        return c;
    }
