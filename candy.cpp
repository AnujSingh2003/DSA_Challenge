class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size() ;
        vector<int> candy(n, 1) ;
        
        //First Pass:Forward traversal to handle increasing ratings
        for(int i = 0; i<n-1; i++) {
            if(ratings[i+1] > ratings[i])
                candy[i+1] = candy[i] + 1 ; //If the next child has a higher rating, give them one more candy than previous child
        }
        
        //Second Pass:Backward traversal to handle decreasing ratings
        for(int i = n-1; i>0; i--) {
            if(ratings[i-1] > ratings[i] && candy[i-1] <= candy[i])
                candy[i-1] = candy[i] + 1 ; 
                //If the previous child has a higher rating and hasn't received more candy, give them more candy than current child
        }

        int totalCandy = 0 ;
        for(int i = 0; i<n; i++)
            totalCandy = totalCandy + candy[i] ;
        
        return totalCandy ;
    }
};