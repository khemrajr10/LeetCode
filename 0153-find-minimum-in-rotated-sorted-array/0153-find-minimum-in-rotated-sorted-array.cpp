class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        
        while(start <= end){
            if(nums[start] > nums[end]){
                start++;
            }else{
                return nums[start];

            }
        }
        return 0 ;
    }
};