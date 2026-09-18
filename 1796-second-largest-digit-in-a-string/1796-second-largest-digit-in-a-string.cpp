class Solution {
public:
    int secondHighest(string s) {

        vector<int> arr;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] >= '0' && s[i] <= '9') {

                int digit = s[i] - '0';

                arr.push_back(digit);
            }
        }

        int largest = INT_MIN;
        int seclargest = INT_MIN;

        for(int x = 0; x < arr.size(); x++) {

            if(arr[x] > largest) {
                seclargest = largest;
                largest = arr[x];
            }

            else if(arr[x] > seclargest && arr[x] < largest) {
                seclargest = arr[x];
            }
         
        }
        if(seclargest == INT_MIN)
    return -1;


        return seclargest;
    }
};