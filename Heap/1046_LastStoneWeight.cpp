class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int> a;
        for(int i=0;i<stones.size();i++){
            a.push(stones[i]);
        }
        while(a.size()>1){
            int y=a.top();
            a.pop();
            int x=a.top();
            a.pop();
            if(x!=y){
               y=y-x;
               a.push(y);
            }
        }
        if(a.size()==1)
            return a.top();
        return 0;
    }
};
