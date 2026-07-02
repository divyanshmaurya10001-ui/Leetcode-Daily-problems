class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        unordered_set<int> st;//set use issliye kiya hai kyu kli set unique value store karta hai aur duplicate value ko neglect kr deta hai

        for (int i = 0 ; i< nums2.size();i++){

        int low = 0,high = nums1.size()-1;
        while (low<=high ){
            int mid = low + (high - low )/2;
         
                if(nums1[mid]==nums2[i]){
                st.insert(nums2[i]);
                break;}
                else if ( nums1[mid] < nums2[i]){
                low = mid+1;}
                else 
                high = mid -1;
            }
        }
    
       return vector<int>(st.begin(),st.end());
    }
};