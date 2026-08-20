class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minval = nums[0];
        int ans =-1;
        for(int j=1; j< nums.size();j++){
                if(nums[j]>minval){
                    ans= max(ans,nums[j]-minval);
                
            }
            minval = min(minval,nums[j]);
        }
        return ans;
    }
};