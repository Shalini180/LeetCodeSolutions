class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        for(int i=0;i<s.length();i++){
            if(s[i]!='#')
                a.push(s[i]);
            else if(s[i]=='#' && a.size()>0)
                a.pop();
        }
        for(int i=0;i<t.length();i++){
            if(t[i]!='#')
                b.push(t[i]);
            else if(t[i]=='#' && b.size()>0)
                b.pop();
        }
        while(a.size()!=0 && b.size()!=0)
        {
            if(a.top()!=b.top())
                return false;
            a.pop();
            b.pop();
        }
        if(a.size()>0 || b.size()>0)
            return false;
        return true;
    }
};
