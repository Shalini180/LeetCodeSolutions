 bool isAlienSorted(vector<string>& words, string order) {
       unordered_map<char,int> a;
        for(int i=0;i<order.length();i++){
            a[order[i]]=i;
        }
        int f=0;
        for(int i=0;i<words.size()-1;i++){
            string c=words[i];
            string d=words[i+1];
            int m=c.length();
            int n=d.length();
            int j=0;
            int k=0;
            while(m>0 && n>0){
                if(a[c[j]]<a[d[k]]){
                    f=1;
                    break;
                }
                if(a[c[j]]>a[d[k]])
                    return false;
                j++;
                k++;
                m--;
                n--;
            }
        }
        if(f==1)
            return true;
        for(int i=0;i<words.size()-1;i++){
            if(words[i].length()>words[i+1].length())
                return false;
        }
        return true;
    }
