class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr;
        for (int i=0;i<nums.size();i++){
            int ans=1;
            ans*=nums[i]*nums[i];
            arr.push_back(ans);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};