class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
             hash[t[i]-'a']--;
             //iska mtlb hota hai ki ki pehel hum ek hash array define karnege aur fir ek ek kr value usme jalunge 1 st string ka aur fir hum ek ek kr hash array se element nikalenge jo bhi match kr jayenge  
            
            // aur 'a' se sub iss liye kiya hai kyu ki index fix rahe 
            //aur Index:  0 1 2 3 4 5 ...
                //Value:  0 0 0 0 0 0 ... mtlb jo isme hash[26]={0}hai yeh batat hai ki kisi element ki kitni frequnecy hai 
        }
        for(int i=0;i<26;i++){
            if(hash[i]!=0){
                return false;
            }
        }
        return true;
    }
};