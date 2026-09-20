class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<pair<int,int>>positionZeros;
        

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (matrix[i][j] == 0){
                    positionZeros.push_back({i,j});
                }
            }
        }

        for(auto it: positionZeros){
            int row = it.first;
            int col = it.second;

            for(int i=0; i<rows; i++){
                matrix[i][col] = 0;
            }

            for(int j=0; j<columns; j++){
                matrix[row][j] = 0;
            }
        }
    }
};