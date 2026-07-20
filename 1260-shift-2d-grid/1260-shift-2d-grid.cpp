class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        int size = row * col;
        k = k % size;

        vector<vector<int>>ans(row,vector<int>(col));

        for(int i=0;i<row;i++){
            for(int j =0 ;j<col;j++){
                int newIndex = i * col + j + k;
                int rowIndex = (newIndex / col) % row;
                int colIndex = newIndex % col;

                ans[rowIndex][colIndex] = grid[i][j];
            }
        }
        return ans;
    }
};