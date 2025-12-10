class Solution {
  public:
  
    void findPaths(int row,int col,int n,vector<vector<int>> &arr,string &s,vector<string> &ans,vector<vector<int>> &visited)
    {
        
        if(row == n-1 && col == n-1) 
        {
            ans.push_back(s);
            return;
        }
        
        if(row+1 <n && !visited[row+1][col] && arr[row+1][col] == 1)
        {
            visited[row][col] = 1;
            s.push_back('D');
            findPaths(row+1,col,n,arr,s,ans,visited);
            s.pop_back();
            visited[row][col] = 0;
        }
        
        if(col-1 >=0 && !visited[row][col-1] && arr[row][col-1] == 1)
        {
            visited[row][col] = 1;
            s.push_back('L');
            findPaths(row,col-1,n,arr,s,ans,visited);
            s.pop_back();
            visited[row][col] = 0;
        }
        
        if(col+1 <n && !visited[row][col+1] && arr[row][col+1] == 1)
        {
            visited[row][col] = 1;
            s.push_back('R');
            findPaths(row,col+1,n,arr,s,ans,visited);
            s.pop_back();
            visited[row][col] = 0;
        }
        
        if(row-1 >=0 && !visited[row-1][col] && arr[row-1][col] == 1)
        {
            visited[row][col] = 1;
            s.push_back('U');
            findPaths(row-1,col,n,arr,s,ans,visited);
            s.pop_back();
            visited[row][col] = 0;
        }
        
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n = maze.size();
        
        
        vector<string> ans;
        string s = "";
        
        vector<vector<int>> visited(n,vector<int>(n,0));
        
        findPaths(0,0,n,maze,s,ans,visited);
        
        return ans;
    }
};