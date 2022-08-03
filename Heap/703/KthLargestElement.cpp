class KthLargest {
public:
    int k;
    vector<int> a;
    priority_queue<int,vector<int>,greater<int>> b;
    KthLargest(int k1, vector<int>& nums) {
        k=k1;
        a=nums;
        for(int i=0;i<a.size();i++){
            b.push(a[i]);
            if(b.size()>k)
                b.pop();
        }
        
    }
    
    int add(int val) {
        a.push_back(val);
        b.push(val);
        while(b.size()>k)
        b.pop();
        return b.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
