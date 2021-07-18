class Solution {
  int moves[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
public:
    int shortestPath(vector<vector<int>>& grid, int K) {
        int n=grid.size();
        int m=grid[0].size();
        queue<vector<int>> p;
        int obrr[n+1][m+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                obrr[i][j]=INT_MAX-2000;
            }
        }
        p.push({0,0});
        obrr[0][0]=grid[0][0];
        int length=-1;
        while(!p.empty())
        {  int size=p.size();
            length++;
           while(size--)
           { vector<int> vrr=p.front();
            p.pop();
            int x=vrr[0];
            int y=vrr[1];
              int obs=obrr[y][x];
            if(x==m-1 and y==n-1)
            { return length;}
            for(int k=0;k<4;k++) //lowercase 'k'
            {
                int X=x+moves[k][0];
                int Y=y+moves[k][1];
                if(X>=0 and Y>=0 and X<m and Y<n)
                { 
                if(obrr[Y][X]>(obs+grid[Y][X]) and (obs+grid[Y][X])<=K) //uppercase 'K'
                     {
                         obrr[Y][X]=obs+grid[Y][X];
                          p.push({X,Y});
                      }
                }
            }
           }   
         }
        
        return -1;
       
    }
};