class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end(),greater<int>());//greater <int> reverse order mein sort karta hai 
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
            //jab pehla 4 milega, tum count++ toh kar doge, lekin i abhi bhi 5 par rahega. Phir doosra 4 bhi 5 se compare hoga aur galat tarike se dobara count ho sakta hai.
            //i = j ka matlab hai Naya distinct element mil gaya, ab isi ko reference bana do
            count ++;
            }
        }
    return nums[0];
    }
};