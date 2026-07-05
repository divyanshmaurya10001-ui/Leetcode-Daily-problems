class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size()-1;
        int ans = 0 ;

        while(low <= high){
            int area = min(height[low],height[high])*(high-low);//yaha pr min(height[low],height[high]) yeh iss liye likha hai isliye kyu ki maan lo ek ki height 8 hai aur dusre hi height 7 hai tooh hame 7 wali heieght ko concider warna hoga water overflow kr jayega toh fir maximum area nahi le payenge 
             
              ans = max(ans,area);
            if(height[low]<height[high]){
                low++;
              }
            else
            high--;
        }
        return ans ;
        
    }
};