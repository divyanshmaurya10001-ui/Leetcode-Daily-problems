class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a=0,b=1,c=1;
        while(a+b+c<=n){
            int sum = a+b+c;
            if(sum==n){
                return true;
            }
            int next= b+c;
            a=b;
            b=c;
            c= next;
        }
        return false;
    }
};