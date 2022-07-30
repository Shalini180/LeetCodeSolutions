class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> b;
        stack<int> c;
        for(int i=nums2.size()-1;i>=0;i--){
            if(c.size()==0)
                b.push_back(-1);
            else if(c.size()>0 && c.top()>nums2[i])
                b.push_back(c.top());
            else if(c.size()>0 &&c.top()<=nums2[i]){
                while((c.size()>0 &&c.top()<=nums2[i])){
                    c.pop();
                }
                if(c.size()==0)
                    b.push_back(-1);
                else
                    b.push_back(c.top());
            }
            c.push(nums2[i]);
        }
        reverse(b.begin(),b.end());
        vector<int> a;
        for(int i=0;i<nums1.size();i++){
            int t=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            a.push_back(b[t]);
        }
        return a;
    }
};
