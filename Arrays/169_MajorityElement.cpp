int majorityElement(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
       sort(nums.begin(),nums.end());
        int i=0;
        int s=0;
       while(i<nums.size()){
          if(i!=nums.size()-1 && nums[i]==nums[i+1] )
              s+=1;
           else if(i!=nums.size()-1 && nums[i]!=nums[i+1])
           {
               s+=1;
               if(s>nums.size()/2)
                   return nums[i];
               else
                   s=0;
           }
           else if(i==nums.size()-1)
           {
               if(nums[i]==nums[i-1]){
                   s+=1;
                   if(s>nums.size()/2)
                   return nums[i];
               }
               else 
                   s=1;
           }
           i++;
       }
        cout<<s<<endl;
        return -1;
       
    }
