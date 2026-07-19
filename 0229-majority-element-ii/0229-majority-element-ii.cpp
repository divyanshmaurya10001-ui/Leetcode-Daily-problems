class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
             for(int i = 0; i < nums.size(); i++){//yaha pr hum frequency count kr rahe hai
                mp[nums[i]]++;
             }
           for (auto it :mp){                   //it.first ka mtlb hota hai key of the map 
                                                // it.second ka mtlb hotya hai frequecy of the element 
            if(floor(nums.size()/3)<it.second){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};