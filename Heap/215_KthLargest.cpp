int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int,vector<int>,greater<int>> a;
        for(int i=0;i<nums.size();i++){
            a.push(nums[i]);
            if(a.size()>k)
                a.pop();
        }
        return a.top();
    }
