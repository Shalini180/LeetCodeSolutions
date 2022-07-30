class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int lb=intervals[0][0];
        int ub=intervals[0][1];
        int lbp=lb;
        int ubp=ub;
        vector<vector<int>> a;
        int i=0;
        int f=0;
        while(i<intervals.size()+1){
            if(i==intervals.size()){
                if(lb!=lbp || ub!=ubp)
                a.push_back({lb,ub});
                else if(f==0)
                    a.push_back({lb,ub});
                break;
                    
            }
            int k=intervals[i][0];
            if(k>=lb && k<=ub){
                lb=min(lb,intervals[i][0]);
                ub=max(ub,intervals[i][1]);
                f=0;
            }
            else{
                a.push_back({lb,ub});
                lbp=lb;
                ubp=ub;
                lb=intervals[i][0];
                ub=intervals[i][1];
                f=1;
            }
            i++;
        }
        return a;
        
    }
};
