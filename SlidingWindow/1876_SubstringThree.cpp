class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;
        int j=0;
        unordered_map<char,int> a;
        int c=0;
        while(j<s.length()){
            a[s[j]]+=1;
            if(j-i+1<3)
                j++;
            else if(j-i+1==3){
                if(a.size()==3)
                    c+=1;
                a[s[i]]-=1;
                if(a[s[i]]==0)
                    a.erase(s[i]);
                j++;
                i++;
            }
        }
        return c;
        
    }
};
