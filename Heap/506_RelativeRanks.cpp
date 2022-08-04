class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> a;
        for(int i=0;i<score.size();i++){
            a.push({score[i],i});
        }
        map<int,int> b;
        int i=1;
        while(a.size()>0){
            b[a.top().second]=i;
            a.pop();
            i++;
        }
        vector<string> c;
        for(auto it=b.begin();it!=b.end();it++){
            if(it->second==1)
                c.push_back("Gold Medal");
            else if(it->second==2)
                c.push_back("Silver Medal");
            else if(it->second==3)
                c.push_back("Bronze Medal");
            else
            c.push_back(to_string(it->second));
        }
        return c;
    }
};
