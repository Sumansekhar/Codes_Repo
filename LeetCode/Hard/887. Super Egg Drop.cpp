class Solution {
public:
    int dp[101][10001];
    long int solve(int e,int f)
    { 
        
        if(e==0)
        {return 0;}
        if(f==0 or f==1)
        {return 1;}
        if(e==1)
        {return f;}
      if(dp[e][f]!=-1)
           {return dp[e][f];}
        int l=1;
        int r=f;
        long int ans=INT_MAX;
        while(l<=r)
        {  int mid=l+(r-l)/2;
           
           long int right=solve(e,f-mid);
           long int left=solve(e-1,mid-1);
           long int temp=max(left,right)+1;
            ans=min(ans,temp);
         if(left>right)
         {
             r=mid-1;
         }
         else
         {
             l=mid+1;
         }
            
        }
        return dp[e][f]=ans;
    }
    
    int superEggDrop(int k, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(k,n);
        
    }
};