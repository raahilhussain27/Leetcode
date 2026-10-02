class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(auto i:nums){
            mp[i]++;
        }
        int i=0;
        while(i<k){
            int maxFre=0;
            int maxEle;
            for(auto i:mp){
                if(i.second>maxFre){
                    maxFre = i.second;
                    maxEle=i.first;
                }
            }
            ans.push_back(maxEle);
            mp.erase(maxEle);
            i++;
        }
        return ans;
    }
};