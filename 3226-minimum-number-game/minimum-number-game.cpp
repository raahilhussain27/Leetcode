class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int min,sec_min,size=nums.size(),k=0;
        vector<int>arr;
        sort(nums.begin(),nums.end());
        while(k<size/2){
            min=nums[0];
            sec_min=nums[1];
            arr.push_back(sec_min);
            arr.push_back(min);
            nums.erase(nums.begin());
            nums.erase(nums.begin());
            k++;
        }
        return arr;
    }
};