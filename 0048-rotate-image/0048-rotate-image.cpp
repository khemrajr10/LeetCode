// // class Solution {
// // public:
// //     void rotate(vector<vector<int>>& matrix) {

// //         int n = matrix.size();

// //         for (int i = 0; i < n; i++) {
// //             for (int j = i + 1; j < n; j++) {
// //                 swap(matrix[i][j], matrix[j][i]);
// //             }
// //         }

// //         for (int i = 0; i < n; i++) {
// //             reverse(matrix[i].begin(), matrix[i].end());
// //         }
// //     }
// // };


// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {

//         int n = matrix.size();
//         int m = matrix[0].size();

//         for(int i=0; i<n; i++){
//             for(int j=i+1;  j<m; j++){
//                 swap(matrix[i][j],matrix[j][i]);
                
//             }
//         }

//         for(int i=0; i<n; i++){
//             int a=0;
//             int b= m-1;
//             while(a<b){
//                 swap(matrix[i][a],matrix[i][b]);
//                 a++;
//                 b--;
//             }
                
            
//         }
        
//     }
// };


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++){
            for(int j=i+1;  j<m; j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end()) ;
            
        }
        
    }
};