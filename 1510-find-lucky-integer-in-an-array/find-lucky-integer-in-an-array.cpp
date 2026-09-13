class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>f(500,0);
        vector<int>ans;
        for(int i:arr) f[i-1]++;
        for(int i=0;i<f.size();i++){
            if(i+1==f[i]) ans.push_back(i+1);
        }
        if(ans.empty()) return -1;
        else{
            int max=ans[0];
            for(int i=0;i<ans.size();i++){
                if(max<ans[i]) max=ans[i];
            }
            return max;
        }
        
    }
};