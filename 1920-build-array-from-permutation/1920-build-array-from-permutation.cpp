class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for(int i=0 ; i<n; i++){
            for(int j=i ; j<=i; j++){
                ans[j]=nums[nums[j]];
            }
        }
        return ans;
    }
};