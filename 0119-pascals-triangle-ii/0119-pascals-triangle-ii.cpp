// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         vector<int> row = {1};

//         for (int i = 1; i <= rowIndex; i++) {
//             vector<int> newRow(i + 1, 1);

//             for (int j = 1; j < i; j++) {
//                 newRow[j] = row[j - 1] + row[j];
//             }

//             row = newRow;
//         }

//         return row;
//     }
// };

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;

        for(int i = 0; i <= rowIndex; i++) {
            vector<int> row;

            for(int j = 0; j <= i; j++) {

                if(j == 0 || j == i) {
                    row.push_back(1);
                }
                else {
                    int value = ans[i-1][j-1] + ans[i-1][j];
                    row.push_back(value);
                }
            }

            ans.push_back(row);
        }

        return ans[rowIndex];
    }
};