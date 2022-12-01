class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,int> a;
        a['a']=0;
        a['e']=0;
        a['i']=0;
        a['o']=0;
        a['u']=0;
        int b1=0;
        int c1=0;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.length();i++){
            if(i<s.length()/2)
            {
                if(a.find(s[i])!=a.end()){
                b1+=1;
                }
            }
            else
            {
                if(a.find(s[i])!=a.end()){
                c1+=1;
                }
            }
        }
        if(b1==c1)
        return true;
        return false;
    }
};
