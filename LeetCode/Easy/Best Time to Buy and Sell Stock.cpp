class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
        {return 0;}
      
        int minimum=prices[0];
        
        int max_diff=0;
        for(int i=1;i<prices.size();i++)
        {   if(minimum>prices[i])
            {minimum=prices[i];}
           
            if((prices[i]-minimum)>max_diff)
            {
                max_diff=prices[i]-minimum;
            }
        }
   return max_diff;   
    }
};
