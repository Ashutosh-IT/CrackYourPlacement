/*

https://leetcode.com/problems/number-of-islands/description/

*/

class Solution {
public:

    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};

    bool valid(int i, int j, int n, int m){
        return i>=0 && j>=0 && i<n && j<m;
    }

    void dfs(vector<vector<char>>& grid, int n, int m, int i, int j, vector<vector<bool>> &visited){
        
        visited[i][j] = true;

        for(int k=0; k<4; k++){

            int newR = i+row[k];
            int newC = j+col[k];

            if(valid(newR,newC,n,m) && !visited[newR][newC] && grid[newR][newC] == '1')
            dfs(grid,n,m,newR,newC,visited);

        }
    }

    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,false));
        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    count++;
                    dfs(grid,n,m,i,j,visited);
                }
            }
        }

        return count;
    }
};
