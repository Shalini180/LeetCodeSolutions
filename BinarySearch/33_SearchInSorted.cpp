int bs(vector<int> a,int start,int end,int target){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(a[mid]==target)
                return mid;
            if(target<a[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
    }
    int pos(vector<int> a){
        int start=0;
        int end=a.size()-1;
        int n=a.size();
        while(start<=end){
            if(a[start]<=a[end])
                return start;
            int mid=start+(end-start)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1)%n;
            if(a[mid]<a[prev] && a[mid]<a[next])
                return mid;
            if(a[start]<=a[mid])
                start=mid+1;
            else if(a[end]>=a[mid])
                end=mid-1;
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int z=pos(nums);
        if(target==nums[z])
            return z;
        else{
            int t=bs(nums,0,z-1,target);
            int q=bs(nums,z+1,nums.size()-1,target);
            return max(t,q);
        }
        return -1;
    }
