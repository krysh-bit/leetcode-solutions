class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum=0;
        int original=n;
        long long prod=1;
        while(n>0){
        int digit=n%10;
        sum=sum+digit;
        prod=prod*digit;
        n=n/10;
        }
        if(original%(sum+prod)==0){
            return true;
        }
        else
         return false;
    }

};