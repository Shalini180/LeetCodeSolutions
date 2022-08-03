class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> a;
        for(int i=0;i<p.length();i++){
           a[p[i]]+=1; 
        }
        int c=a.size();
        int i=0;
        int j=0;
        vector<int> b;
        while(j<s.length()){
            if(a.find(s[j])!=a.end()){
                a[s[j]]-=1;
                if(a[s[j]]==0)
                    c-=1;
            }
            if(j-i+1<p.length())
                j++;
            else if(j-i+1==p.length()){
                if(c==0)
                    b.push_back(i);
                if(a.find(s[i])!=a.end()){
                    a[s[i]]+=1;
                    if(a[s[i]]==1)
                        c+=1;
                }
                i++;
                j++;        
            }
        }
        return b; 
    }
};
