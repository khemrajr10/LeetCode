class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited;

    void backtrack(vector<int>& nums) {

        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (visited[i])
                continue;

            visited[i] = true;
            temp.push_back(nums[i]);

            backtrack(nums);

            temp.pop_back();
            visited[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        visited.resize(nums.size(), false);

        backtrack(nums);

        return ans;
    }
};