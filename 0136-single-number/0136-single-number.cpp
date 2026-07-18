class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            bool foundDuplicate = false;

            for (int j = 0; j < n; j++) {
                if (i != j && nums[i] == nums[j]) {
                    foundDuplicate = true;
                    break;
                }
            }

            if (!foundDuplicate) {
                return nums[i];
            }
        }

        return -1; 
    }
};