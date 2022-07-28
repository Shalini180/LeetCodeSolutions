int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
                    return mid;
                if(arr[mid+1]>arr[mid])
                    start=mid+1;
                else if(arr[mid-1]>arr[mid])
                    end=mid-1;
            }
            if(mid==0){
                if(arr[mid]>arr[mid+1])
                    return 0;
                else
                    return 1;
            }
            if(mid==arr.size()-1){
                if(arr[mid]>arr[mid-1])
                    return arr.size()-1;
                else
                    return arr.size()-2;
            }
        }
        return -1;
    }
