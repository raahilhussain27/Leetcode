class Solution {
public:
    int smallestNumber(int n) {
        vector<int>val;
        for(int i=0;i<=10;i++){
            val.push_back(1<<i);
        }
        for(auto i:val){
            if(n==1) return i;
            else if(i>n) return i-1;
        }
        return 0;
    }
};