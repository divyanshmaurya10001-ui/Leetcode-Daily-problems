class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        if(n<2) return nums[0];
        int i =0;
        int j=0;
        int count =1;
        while(i<n && j<n){
            if(count == 3) return nums[i];
            if(nums[i]==nums[j]){
                j++;
            }
            else{
            i=j;
            count ++;
            }
        }
    return nums[0];
    }
};