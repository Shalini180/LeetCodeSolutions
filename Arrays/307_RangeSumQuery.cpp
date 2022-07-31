class NumArray {
public:
    int s;
    vector<int> nums;
    NumArray(vector<int>& d) {
        s=0;
        nums=d;
        for(int i=0;i<nums.size();i++)
            s+=nums[i];
    }
    
    void update(int index, int val) {
        s-=nums[index];
        nums[index]=val;
        s+=nums[index];
    }
    
    int sumRange(int left, int right) {
        int q=s;
        for(int i=0;i<left;i++)
          q-=nums[i];
        for(int j=right+1;j<nums.size();j++)
            q-=nums[j];
        return q;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
