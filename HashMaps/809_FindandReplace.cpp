vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      vector<string> m;
      for(int i=0;i<words.size();i++){
          unordered_map<char,char> a;
          unordered_map<char,char> b;
          string k=words[i];
          for(int i=0;i<k.length();i++){
              if(a.find(k[i])==a.end() && b.find(pattern[i])==b.end()){
                   a[k[i]]=pattern[i];
                   b[pattern[i]]=k[i];
              }
          }
          string h="";
          for(int i=0;i<k.length();i++){
              h+=a[k[i]];
          }
          if(h==pattern)
              m.push_back(k);
      }
        return m;
    }
