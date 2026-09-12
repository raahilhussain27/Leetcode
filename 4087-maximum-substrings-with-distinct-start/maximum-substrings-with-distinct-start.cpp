class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>m;
        int ans=0;
        for(auto i:s) m[i]++;
        for(auto i:m){
            if(i.first>=1) ans++;
        }
        return ans;
    }
};