class Solution {
public:
    int findComplement(int num) {
        int n=0;
        int t=num;
        while(t>0){
            n=n<<1;
            n=n|1;
            t=t>>1;
        }
        return num^n;
    }
};