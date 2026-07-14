class Solution {
public:
 int expand(string &s,int i, int j){
    int count =0;
    while(i>=0 && j<= s.size()-1&& s[i]==s[j]){
        count ++;
        i--;
        j++;
    }
    return count ;
 }
    int countSubstrings(string s) {
        int ans =0;
        for(int k=0;k<s.size();k++){

           ans = ans + expand(s,k,k);

           ans = ans+ expand(s,k,k+1);
        }
        return ans;
    }
};