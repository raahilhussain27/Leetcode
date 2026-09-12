class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        for(int i=0;i<boxes.length();i++){
            int val=0;
            for(int j=0;j<boxes.length();j++){
                if(boxes[j]=='1') val+=abs(i-j);
                cout<<val;
            }
            ans.push_back(val);
        }
        return ans;
    }
};