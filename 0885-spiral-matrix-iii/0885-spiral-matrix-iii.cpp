class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {

        vector<vector<int>> ans;

        int row = rStart;
        int col = cStart;

        int step = 1;

        int dir[4][2] = {
            {0, 1},    
            {1, 0},   
            {0, -1},  
            {-1, 0}    
        };

        int d = 0;

        while (ans.size() < rows * cols) {
            for (int repeat = 0; repeat < 2; repeat++) {
                for (int i = 0; i < step; i++) {
                    if (row >= 0 && row < rows &&
                        col >= 0 && col < cols) {
                        ans.push_back({row, col});
                    }
                    row += dir[d][0];
                    col += dir[d][1];
                }

                d = (d + 1) % 4;
            }   
            step++;
        }

        return ans;
    }
};