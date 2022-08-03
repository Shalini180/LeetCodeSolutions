class MyCalendar {
public:
    map<int,int> a;
    MyCalendar() {
        map<int,int> b;
        a=b;
    }
    
    bool book(int start, int end) {
        a[start]++;
        a[end]--;
        int s=0;
        for(auto it=a.begin();it!=a.end();it++){
            s+=it->second;
            if(s>1){
                a[start]--;
                a[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
