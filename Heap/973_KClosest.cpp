 vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue <pair<int,pair<int,int>>> a;
        for(int i=0;i<points.size();i++){
            int p=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            a.push({p,make_pair(points[i][0],points[i][1])});
            if(a.size()>k)
                a.pop();
        }
        vector<vector<int>> c;
        while(a.size()!=0){
            vector<int> p;
            p.push_back(a.top().second.first);
            p.push_back(a.top().second.second);
            c.push_back(p);
            a.pop();
        }
        return c;
    }
