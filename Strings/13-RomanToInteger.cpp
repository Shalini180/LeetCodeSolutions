class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,pair<int,int>> a;
        a['M']={1000,1};
        a['D']={500,2};
        a['C']={100,3};
        a['L']={50,4};
        a['X']={10,5};
        a['V']={5,6};
        a['I']={1,7};
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            if(a[s[i]].second<=a[s[i+1]].second)
                sum+=a[s[i]].first;
            else if(a[s[i]].second>a[s[i+1]].second)
                sum-=a[s[i]].first;
        }
        sum+=a[s[s.length()-1]].first;
        return sum;
    }
};
