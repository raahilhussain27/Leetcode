class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int> f(n,0);
        for(auto i:nums) f[i-1]++;
        for(int i=0;i<n;i++){
            if(f[i]==0) ans.push_back(i+1);
        }
        return ans;
    }
};