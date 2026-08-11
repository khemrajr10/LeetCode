class Solution {
public:
    int thirdMax(vector<int>& nums) {

        int n = nums.size();

       
        for (int i = 0; i < n - 1; i++) {
            int maxIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[maxIndex]) {
                    maxIndex = j;
                }
            }

            int temp = nums[i];
            nums[i] = nums[maxIndex];
            nums[maxIndex] = temp;
        }

        int count = 1;

        for (int i = 1; i < n; i++) {

            if (nums[i] != nums[i - 1]) {
                count++;
            }

            if (count == 3) {
                return nums[i];
            }
        }

        
        return nums[0];
    }
};