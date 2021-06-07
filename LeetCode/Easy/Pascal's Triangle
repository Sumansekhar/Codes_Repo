class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back({1});
        for(int i=1;i<numRows;i++)
        {   vector<int> v1;
           int ans=1;
            for(int j=0;j<=i;j++)
            {   if(j==0)
               {ans=1;}
              else{
              ans= ans*(i-j+1)/j; }
             v1.push_back(ans);
             
            }
         v.push_back(v1);
        }
        return v;
    }
};
