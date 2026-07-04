class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1;
        int sum = 0;
        while(n>0){
        int a = n % 10 ;
            n= n/10;
            mul = mul * a;
            sum = sum+ a ;
        }
                return mul - sum ;

    }
};