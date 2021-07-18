typedef pair<int,int> pii;
typedef long int ll;
class Solution {
public:
    int visited[51][51];
    int move[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
    bool solve(vector<vector<int>> &grid,int n,int m,int mid,int x,int y)
    {   if(x<0 or y<0 or x>=m or y>=n or visited[x][y])
         {return false;}
        
        if(grid[x][y]>mid)
        {return false;}
       if(x==n-1 and y==m-1)
       {return true;}
        visited[x][y]=1;
      bool flag=false;
        for(int k=0;k<4;k++)
        {
            flag=flag||solve(grid,n,m,mid,x+move[k][0],y+move[k][1]);
        }
        return flag;
    }
  

int swimInWater(vector<vector<int>>& grid) {
	ll n=grid.size();
    ll m=grid[0].size();
    ll l=max(grid[0][0],grid[n-1][m-1]);
    l=max(l,2*(n-1)); //since min val path will always have a element greater than 2*(n-1)
     //we can take l=0 as well, but we are using max for slight optimaztion purpose only
    ll r=n*n-1;
    ll mid;
    ll ans=n*n;
    while(l<=r)
    {
      mid=l+(r-l)/2;
        for(int i=0;i<51;i++)
        {
            for(int j=0;j<51;j++)
            {
                visited[i][j]=0;
            }
        }
        //cout<<mid<<" ";
        if(solve(grid,n,m,mid,0,0)==true)
        {
            r=mid-1;
            ans=min(ans,mid);
        }
        else
        {
            l=mid+1;
        }
        
    }
    return ans;
    
}


};
//[[0,1,2,3,4],[24,23,22,21,5],[12,13,14,15,16],[11,17,18,19,20],[10,9,8,7,6]]