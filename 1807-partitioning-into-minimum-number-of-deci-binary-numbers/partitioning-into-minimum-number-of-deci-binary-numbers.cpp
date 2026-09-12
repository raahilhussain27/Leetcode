class Solution {
public:
    int minPartitions(string n) {
        int mx=n[0]-'0';
        for(auto i:n){
            if(mx<i-'0') mx=i-'0';
        }
        return mx;
    }
};