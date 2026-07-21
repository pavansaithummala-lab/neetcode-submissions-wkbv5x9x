class Solution {
public:

    int dfs(vector<vector<int>>& grid, int row, int col){
        int rows= grid.size();
        int cols = grid[0].size();
        if(row<0|| row>=rows | col<0 || col >=cols || grid[row][col]==0){
            return 0;
        }
        grid[row][col]=0;
        int area =1;

        area+=dfs(grid, row-1, col);
        area+=dfs(grid, row+1, col);
        area+=dfs(grid, row, col-1);
        area+=dfs(grid, row, col+1);

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty()){
            return 0;
        }

        int rows = grid.size();
        int columns = grid[0].size();

        int maxArea=0;

        for(int row =0; row< rows; row++){
            for(int col =0; col<columns; col++){
                if(grid[row][col]==1){
                    int currentArea = dfs(grid,row,col);

                    maxArea = max(maxArea, currentArea);
                }
            }
        }

        return maxArea;
    }
};
