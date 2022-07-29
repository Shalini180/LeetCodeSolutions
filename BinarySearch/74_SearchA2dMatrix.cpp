bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0;
        int j=n-1;
        while(i>=0 && i<m && j>=0 && j<n){
            if(matrix[i][j]==target)
                return true;
            if(target<matrix[i][j])
                j--;
            else if(target>matrix[i][j])
                i++;
        }
        return false;
    }
