// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int rows = matrix.size();
//         int columns = matrix[0].size();
//         vector<pair<int,int>>positionZeros;
        

//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < columns; j++) {
//                 if (matrix[i][j] == 0){
//                     positionZeros.push_back({i,j});
//                 }
//             }
//         }

//         for(auto it: positionZeros){
//             int row = it.first;
//             int col = it.second;

//             for(int i=0; i<rows; i++){
//                 matrix[i][col] = 0;
//             }

//             for(int j=0; j<columns; j++){
//                 matrix[row][j] = 0;
//             }
//         }
//     }
// };



// //brute force appraoch
// class Solution {
// public:

//     // Mark all non-zero elements in this row as -1
//     void markRow(vector<vector<int>>& matrix, int row, int columns) {
//         for(int j = 0; j < columns; j++) {
//             if(matrix[row][j] != 0) {
//                 matrix[row][j] = -1;
//             }
//         }
//     }

//     // Mark all non-zero elements in this column as -1
//     void markCol(vector<vector<int>>& matrix, int col, int rows) {
//         for(int i = 0; i < rows; i++) {
//             if(matrix[i][col] != 0) {
//                 matrix[i][col] = -1;
//             }
//         }
//     }

//     void setZeroes(vector<vector<int>>& matrix) {
//         int rows = matrix.size();
//         int columns = matrix[0].size();

//         for(int i = 0; i < rows; i++) {
//             for(int j = 0; j < columns; j++) {

//                 if(matrix[i][j] == 0) {
//                     markRow(matrix, i, columns);
//                     markCol(matrix, j, rows);
//                 }
//             }
//         }

//         for(int i=0 ; i<rows; i++){
//             for(int j=0 ; j<columns; j++){
//                 if(matrix[i][j] == -1){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };

//better appraoch
//brute force appraoch
class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        vector<int> row(rows, 0);
        vector<int> col(columns, 0);

        for (int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

          for (int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                if(row[i]||col[j]){
                   matrix[i][j] = 0;
                }
            }
        }
   }   
   
 };