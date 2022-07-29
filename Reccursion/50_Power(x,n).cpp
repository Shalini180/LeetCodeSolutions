double power(double x, int n) {
        if(n==0)
            return 1.0;
        return x*myPow(x,n-1);
    }
    double myPow(double x, int n) {
        if(n==INT_MAX)
        {
            return x;
                
        }
        if(n==INT_MIN)
        {
            if(x==1 || x==-1)
                return 1;
            return 0;
        }
        if(n>0)
            return power(x,n);
        else
            return power(1/x,abs(n));
        return 0.0;
    }
