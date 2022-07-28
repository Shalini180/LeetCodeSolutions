 bool isAnagram(string s, string t) {
        unordered_map<char,int> c;
        for(int i=0;i<s.length();i++){
            c[s[i]]+=1;
        }
        for(int i=0;i<t.length();i++){
            if(c.find(t[i])!=c.end()){
                c[t[i]]-=1;
                if(c[t[i]]==0)
                    c.erase(t[i]);
            }
        }
        if(c.size()==0 &&s.length()==t.length())
            return true;
        return false;
    }
