class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        reverse(nums.begin(), nums.end());

        vector<int> a;
        vector<int> b;

        for(int i = 0; i < k; i++) {
            a.push_back(nums[i]);
        }

        for(int i = k; i < n; i++) {
            b.push_back(nums[i]);
        }

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        
        for(int i = 0; i < a.size(); i++) {
            nums[i] = a[i];
        }

        for(int i = 0; i < b.size(); i++) {
            nums[a.size() + i] = b[i];
        }
    }
};