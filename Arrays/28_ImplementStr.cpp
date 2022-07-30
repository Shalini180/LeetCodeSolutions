class Solution {
public:
    int strStr(string haystack, string needle) {
        char k=needle[0];
        if(haystack==needle)
            return 0;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==k)
            {
                string c=haystack.substr(i,needle.length());
                if(c==needle)
                    return i;
            }
        }
        return -1;
    }
};
