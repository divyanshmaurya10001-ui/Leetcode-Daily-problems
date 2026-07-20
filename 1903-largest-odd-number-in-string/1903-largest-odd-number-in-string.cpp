class Solution {
public:
    string largestOddNumber(string num) {
        for ( int i = num.size();i>=0;i--){
            int digit= num[i]-'0';//'0' subtract karne se character digit integer digit me convert ho jata hai. ASCII value se direct minus ho jati hai given digit ki value like value 4 hai toh 4 ki ASCII value hoti hai 52 aur jab hum 0 ki ASCII value se sub karenge toh toh automatically 4 hi de dega hame as a digit 
            // 52-48 =4
            if(digit % 2!=0){
                return num.substr(0,i+1);// aur jaha or vaklue odd mili waha tak ki string return kr denge 
            }
        }
        return "";
    }
};