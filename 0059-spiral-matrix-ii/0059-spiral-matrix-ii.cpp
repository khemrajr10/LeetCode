// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {

//         int top=0;
//         int left= 0;
//         int bottom = n-1;
//         int right = n-1;
//         int count = 1;
//         vector<vector<int>>matrix(n, vector<int>(n));

//         while(left <= right && top <= bottom){
//             for(int i=left; i<=right; i++){
//                 matrix[top][i] = count;
//                count++;
//             }
//             top++;

//             for(int i = top; i<=bottom; i++){
//                 matrix[i][right] = count;
//                 count++;
//             }
//             right--;

//         for(int i=right; i>=left; i--){
//             matrix[bottom][i]=count;
//             count++;
//         }
//         bottom--;
        

//         for(int i = bottom; i>=top; i--){
//             matrix[i][left] = count;
//             count++;
//         }
//         left++;
//         }
//         return matrix;
//     }
// };




class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int top = 0;
        int left = 0;
        int bottom = n - 1;
        int right = n - 1;
        int count = 1;

        vector<vector<int>> matrix(n, vector<int>(n));

        while (top <= bottom && left <= right) {

            // Left → Right
            for (int i = left; i <= right; i++) {
                matrix[top][i] = count++;
            }
            top++;

            // Top → Bottom
            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = count++;
            }
            right--;

            // Right → Left
            if (top <= bottom) { // ---> i did not thoughht of this condiition
                for (int i = right; i >= left; i--) {
                    matrix[bottom][i] = count++;
                }
                bottom--;
            }

            // Bottom → Top
            if (left <= right) {  // ---> i did not thoughht of this condiition
                for (int i = bottom; i >= top; i--) {
                    matrix[i][left] = count++;
                }
                left++;
            }
        }

        return matrix;
    }
};