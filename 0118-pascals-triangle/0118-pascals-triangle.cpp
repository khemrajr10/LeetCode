// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> ans;

//         for (int i = 0; i < numRows; i++) {
//             vector<int> row(i + 1, 1);

//             for (int j = 1; j < i; j++) {
//                 row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
//             }

//             ans.push_back(row);
//         }

//         return ans;
//     }
// };



class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        for(int i=1; i<=numRows; i++){
            vector<int>row;
            for(int j=1; j<=i; j++){
                if( j ==1 || j == i){
                    row.push_back(1);
                }else{
                    int value = ans[i-2][j-2] + ans[i-2][j-1];
                    row.push_back(value);
                }
            }
            ans.push_back(row);
        }
        return ans;
    }
};











