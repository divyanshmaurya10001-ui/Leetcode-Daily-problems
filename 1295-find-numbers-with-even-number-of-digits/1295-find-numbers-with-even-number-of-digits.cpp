class Solution {//yeh methord 1 hai 
public:
    int findNumbers(vector<int>& nums) {
        int count =0;
        for(int i = 0; i < nums.size(); i++) {

    string s = to_string(nums[i]);

    int digits = 0;

    for(int j = 0; j < s.size(); j++) {
        digits++;
    }

    if(digits % 2 == 0) {
        count++;
    }
}
return count ;
    }
};
// yrh methord 2 hai
//class Solution {
//public:
//    int findNumbers(vector<int>& nums) {
  //      int count = 0;
//
  //      for(int i = 0; i < nums.size(); i++) {
//
  //          int n = nums[i];
    //        int digits = 0;
//
  //          while(n > 0) {
    //            digits++;
      //          n /= 10;
        //    }

          //  if(digits % 2 == 0) {
            //    count++;
            //}
        //}
//
  //      return count;
    //}
//};