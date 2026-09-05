class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int next=0;
        for(int i=0;i<nums.size();i++){
            next = next + nums[i];
            ans.push_back(next);
        }
        return ans;
    }
};