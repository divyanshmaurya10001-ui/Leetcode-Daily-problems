class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_start = 0 , row_end = matrix.size() -1 , row_mid ;
        while ( row_start<= row_end)
        {
            row_mid = row_start+(row_end - row_start)/2 ;
            int col_start=0,col_end=matrix[row_start].size()-1;

            if (matrix[row_mid][col_start]<= target && matrix[row_mid][col_end]>=target) 
            {
                while(col_start<=col_end)
                {
                   int col_mid=col_start+(col_end-col_start)/2;
                    if(matrix[row_mid][col_mid]==target)
                    return true;
                    else if ( matrix[row_mid][col_mid]<target)
                    {
                        col_start=col_mid+1;
                    }
                    else{
                            col_end = col_mid-1 ;
                        }
                            
                            
                }
                return false;
        
                
            }
            else if (matrix[row_mid][col_start]<target)
                {
                    row_start=row_mid+1 ;
                }
             else
             {
                row_end = row_mid-1 ;
             }

        }
        return false ;
        
    }
};