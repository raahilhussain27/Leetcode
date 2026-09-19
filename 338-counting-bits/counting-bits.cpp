class Solution {
public:
    vector<int> countBits(int n) {
        int rem;
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int cnt=0,x=i;
            while(x>0){
                rem=x%2;
                if(rem==1) cnt++;
                x/=2;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};