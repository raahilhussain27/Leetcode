class Solution {
public:
    int hammingWeight(int n) {
        int rem;
        string binary="";
        while(n>0){
            rem=n%2;
            binary+=to_string(rem);
            n/=2;
        }
        int ans=0;
        for(auto i:binary){
            if(i=='1') ans++;
        }
        return ans;
    }
};