class Solution {
public:

    vector<vector<int>> ans;
    vector<int> path;

    void solve(vector<int>& nums, int start, int target) {

        if(target == 0) {
            ans.push_back(path);
            return;
        }

        for(int i = start; i < nums.size(); i++) {

            // Skip duplicate values at the same recursion level
            if(i > start && nums[i] == nums[i - 1])
                continue;

            // Prune because array is sorted
            if(nums[i] > target)
                break;

            path.push_back(nums[i]);

            solve(nums, i + 1, target - nums[i]);

            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        solve(candidates, 0, target);

        return ans;
    }
};