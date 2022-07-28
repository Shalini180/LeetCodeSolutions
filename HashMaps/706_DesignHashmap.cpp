class MyHashMap {
public:
    vector<int> key;
    vector<int> value;
    MyHashMap() {
        vector<int> v;
        vector<int> k;
        key=k;
        value=v;
    }
    void put(int key1, int value1) {
        if(find(key.begin(),key.end(),key1)!=key.end())
        {
            auto it=find(key.begin(),key.end(),key1);
            int index=it-key.begin();
            value[index]=value1;
        }
        key.push_back(key1);
        value.push_back(value1); 
    }
    int get(int key1) {
       if(find(key.begin(),key.end(),key1)!=key.end())
        {
            auto it=find(key.begin(),key.end(),key1);
            int index=it-key.begin();
            return value[index];
        } 
        return -1;
    }
    
    void remove(int key1) {
         if(find(key.begin(),key.end(),key1)!=key.end())
        {
            auto it=find(key.begin(),key.end(),key1);
            int index=it-key.begin();
             value[index]=-1;
        } 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
