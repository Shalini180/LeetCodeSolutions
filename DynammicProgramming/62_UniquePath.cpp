class Solution {
    int t[101][101];
public:
     Solution(){
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++)
                t[i][j]=-1;
        }
    }
    int paths(int i,int j,int m,int n){
        if(i>=m || j>=n)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
        if(t[i][j]!=-1)
            return t[i][j];
        return t[i][j]=paths(i+1,j,m,n)+paths(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
       int p= paths(0,0,m,n);
        return p;
    }
};
