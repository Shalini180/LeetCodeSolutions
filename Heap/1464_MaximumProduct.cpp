class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> b;
        for(int i=0;i<nums.size();i++)
            b.push(nums[i]);
        int l=b.top();
        b.pop();
        int r=b.top();
        b.pop();
        return (l-1)*(r-1);
    }
};
