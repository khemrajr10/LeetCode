class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();

        int bestSum = 0;
        int smallestDiff = INT_MAX;

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                for (int k = j + 1; k < n; k++) {

                    int sum = nums[i] + nums[j] + nums[k];

                    int difference = abs(sum - target);

                    if (difference < smallestDiff) {
                        smallestDiff = difference;
                        bestSum = sum;
                    }
                }
            }
        }

        return bestSum;
    }
};