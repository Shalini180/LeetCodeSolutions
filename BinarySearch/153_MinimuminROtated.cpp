class Solution {
public:
    int findMin(vector<int>& nums) {
       int start=0;
       int end=nums.size()-1;
       int n=nums.size();
        int mid;
        while(start<=end){
            if(nums[start]<=nums[end])
                return nums[start];
            mid=start+(end-start)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next])
                return nums[mid];
            if(nums[start]<nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        if(nums[mid]<nums[mid+1])
            return nums[mid];
        return nums[mid+1];
    }
};
