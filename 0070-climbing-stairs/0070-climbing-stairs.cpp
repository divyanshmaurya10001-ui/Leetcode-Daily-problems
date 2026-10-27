class Solution {
private:
    int helper(int step,vector<int>&memo){
    if(step<=2)return step;
    if(memo[step]!=-1)return memo[step];
    return memo[step]=helper(step-1,memo)+helper(step-2,memo);
    }
public:
    int climbStairs(int n) {
        vector<int>memo(n+1,-1);
        return helper(n,memo);
    }
};