class Solution {
public:
    char repeatedCharacter(string s) {
        int f[26]={0};
        for(auto i:s){
            if(f[i-'a']==1) return i;
            f[i-'a']++;
        }
        return 0;
    }
};