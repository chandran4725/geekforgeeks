class Solution {
  public:
    
    void makeLand(int row,int col,int n,int m,vector<vector<char>>& grid)
    {
        if(row >= n || row < 0 || col < 0 || col >= m) return;
        
        if(grid[row][col] == 'W') return;
        
        grid[row][col] = 'W';
        
        makeLand(row+1, col, n, m, grid);
        makeLand(row-1, col, n, m, grid);
        makeLand(row, col+1, n, m, grid);
        makeLand(row, col-1, n, m, grid);
        makeLand(row+1, col+1, n, m, grid);
        makeLand(row+1, col-1, n, m, grid);
        makeLand(row-1, col+1, n, m, grid);
        makeLand(row-1, col-1, n, m, grid);
    }
    
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 'L')
                {
                    count++;
                    makeLand(i,j,n,m,grid);
                }
            }
        }
        
        return count;
    }
};