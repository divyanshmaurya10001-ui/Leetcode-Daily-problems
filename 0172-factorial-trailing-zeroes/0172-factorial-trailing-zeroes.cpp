class Solution {
public:
    int trailingZeroes(int n) {
        int count =0;
        
        while (n>0){
            n =n/5;
            count += n;
        }
        return count;
    }
};
/*count = 0

30/5 = 6
count = 6

6/5 = 1
count = 7

1/5 = 0

Answer = 7 */