class Solution {
public:
    double myPow(double x, int n) {
        double ans =1;
     if(n==0){
        return 1;
     }
        else{
            ans= ans*pow(x,n);


        }
     return ans;
    }
};