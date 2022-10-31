class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
       int p=matrix[0][0];
       int f=0;
       for(int i=0;i<matrix.size();i++){
           int p=matrix[i][0];
           int j=i;
           int k=0;
           while(j<matrix.size() && k<matrix[0].size()){
               if(p!=matrix[j][k]){
                   return false;
                   f=1;
               }
               j++;
               k++;
           }
       }
       for(int i=0;i<matrix[0].size();i++){
           int p=matrix[0][i];
           int j=0;
           int k=i;
           while(j<matrix.size() && k<matrix[0].size()){
               if(p!=matrix[j][k]){
                   return false;
                   f=1;
               }
               j++;
               k++;
           }
       }
        return true;
    }
};
