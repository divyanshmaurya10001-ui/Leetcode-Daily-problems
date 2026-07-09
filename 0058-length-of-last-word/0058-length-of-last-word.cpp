class Solution {
public:
    int lengthOfLastWord(string s) {
        int i= s.length()-1;
        while(i>=0 && s[i]==' '){// yrh wala code issliye hai ki maan li last mein space aa gaya toh toh hume  use skip karna hota hai pr space bhi 1 string hota hai isliye hum space ko hum hatate hai iss tarike se 
            i--;
        }
        int count =0;
        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }
        return count;
    }
};