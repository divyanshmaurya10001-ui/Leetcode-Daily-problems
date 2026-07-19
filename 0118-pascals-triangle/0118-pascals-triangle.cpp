class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>ans;//iska mtlb hai ki yeh store karta hai vectors ko mtlb maan lo koi vector1 hai {1,2,3,4} aur vector 2 hai {1,23,44} toh in dono vector s ko ek sath store karne ka kaam isi ka hai 
      for (int i=0;i<numRows;i++){
        vector<int> row(i+1);//yeh woh hai jisme hr row k element store honge aur i+1 issliye kyu ki array jo hai 0 se shuru ho raha hai 
        row[0]=1;
        row[i]=1;
        for (int j=1;j<i;j++){//j<i aur j=1 kiya hai kyu ki j[0] aur j[i] hamne pehele hi 1 set kr diya hai hame bs bich k element nikalne hai  
        row[j] = ans[i-1][j-1]+ans[i-1][j];
      }
        ans.push_back(row);
      }
      return ans;
    }
};