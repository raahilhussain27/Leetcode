class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int val,k,sum;
        for(int i=0;i<nums.size();i++){
            val=nums[i];
            sum=0;
            while(val>0){
                k=val%10;
                sum+=k;
                val/=10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};