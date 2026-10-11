class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool first) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                if (first)
                    high = mid - 1; 
                else
                    low = mid + 1; 
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums, target, true);
        if (first == -1)
            return {-1, -1};

        int last = binarySearch(nums, target, false);

        return {first, last};
    }
};

