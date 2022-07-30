class Solution {
public:
    vector<int> t;
    Solution(){
        vector<int> c(31,-1);
        t=c;
    }
    int fib(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        if(t[n]!=-1)
            return t[n];
        return t[n]=fib(n-1)+fib(n-2);
        
    }
};
