class Solution {
public:
    bool detectCapitalUse(string s) {
        int count=0;
        for (int i =0;i<s.length();i++){
            if(isupper(s[i])){
                count ++;}}
            
            if(count == s.length()){
                return true;
            }
            if( count == 0){
                return true;
            }
            if (count == 1 && isupper(s[0])) {
            return true;            
        }    
        return false ;
        
    }
};