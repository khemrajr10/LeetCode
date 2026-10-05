class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>transpose;

        for(int i=0; i<m; i++){
            vector<int>row;
            for(int j=0; j<n; j++){
                row.push_back(matrix[j][i]);
            }
            transpose.push_back(row);
        }
        return transpose;
        
    }
};