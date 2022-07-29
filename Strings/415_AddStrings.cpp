class Solution {
public:
    string addStrings(string num1, string num2) {
        string a="";
        int m=num1.length()-1;
        int n=num2.length()-1;
        int c=0;
        while(m>=0 || n>=0 || c>0){
            int v=0;
            int k=0;
            if(m>=0)
            v=num1[m]-'0';
            if(n>=0)
            k=num2[n]-'0';
            int s=v+k+c;
            char e=(s%10)+'0';
            a.push_back(e);
            c=s/10;
            m--;
            n--;
        }
        reverse(a.begin(),a.end());
        return a;
        
    }
};
