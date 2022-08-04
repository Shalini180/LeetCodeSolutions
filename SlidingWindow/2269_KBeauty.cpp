class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i=0;
        int j=0;
        string a=to_string(num);
        int c=0;
        while(j<a.length()){
            if(j-i+1<k)
                j++;
            else if(j-i+1==k){
                int p=stoi(a.substr(i,j-i+1));
                if(p!=0 && num%p==0)
                    c+=1;
                i++;
                j++;
            }
        }
        return c;
        
    }
};
