class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit =0 ;
        for(int i =1 ; i<n ; i++){// yaha pr loop 1 se issliye chal raha hai kyu ki agar loop 0 se chalega toh jab hum i-1 se i ko compare karenge toh hum kr nahi payenge kyu ki yeh dikkat aayegi ki -1 index wala element exist nahu krtanhai array mein toh yeh runtime error de dega
        if(prices[i]>prices[i-1])
            profit += prices[i]-prices[i-1];
        }
        return profit;
    }
};