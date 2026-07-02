class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
        return x ;//iska mtlb hai ki 2 se chota 1 aur 0 hota hai toh hame uska square root nikalne ki jarurat nahi hoti kui woh khud hi sqrt hote hai khud k 

        int low = 1 , high = x/2;

        //high ko x/2 issliye kiya kyu hi jo bhi sqrt value ki range hogi woh 0 se x/ k buch hi hogi 
        // dry run : x=16
        //          sqrt(16)=4
        //          aur x/2 = 8 mtlb ki 4 jo hai 1 sr 8 bich hi rahega 

        while(low <= high ){
            int mid = low +(high - low )/2;
            if(mid == x/mid){
                return mid;
            }
            else if(mid < x/mid){
                low = mid + 1;
            }
            else
               high = mid -1;
        
        }
        return high ;//When the exact square root doesn't exist, high stores the largest integer whose square is less than x.
    }
};