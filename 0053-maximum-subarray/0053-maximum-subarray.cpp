class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_sum=INT_MIN;
        int currsum=0;
        for(int i =0;i<n;i++){
            currsum +=nums[i];
        
        if(currsum > max_sum){
            max_sum =currsum ;
        }
        if(currsum<0){
            currsum=0;
        }
        }
        return max_sum;
    }
};
