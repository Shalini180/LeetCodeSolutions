int countnegative(vector<int> a){
        int start=0;
        int n=a.size();
        int end=n-1;
        int ans=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(a[mid]<0){
                ans=mid;
                end=mid-1;
            }
            else if(a[mid]>=0){
                start=mid+1;
            }
        }
        return n-ans;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int s=0;
        for(int i=0;i<grid.size();i++){
            s+=countnegative(grid[i]);
        }
        return s;
    }
