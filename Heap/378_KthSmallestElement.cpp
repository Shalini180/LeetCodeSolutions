class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> a;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                a.push(matrix[i][j]);
                if(a.size()>k)
                a.pop();
            }
        }
        return a.top();
    }
};
