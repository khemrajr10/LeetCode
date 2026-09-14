// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();

        
//         int maxSum= nums[0];
//         for(int i=0; i<n; i++){
//             int sum = 0;
//             for(int j=i; j<n; j++){
//                 sum += nums[j];  
//                 maxSum= max(maxSum,sum);
//             }
//         }

//         return maxSum;

//     }
// };


// better solution
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int maxSum= INT_MIN;
//         int sum=0;
//         for(int i=0; i<n; i++){
//             sum += nums[i];
//             if(sum > 0){
                
//                 maxSum= max(maxSum,sum);
//             }

//         }

//        return maxSum;
//     }
// };

// optimal solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum= INT_MIN;
        int sum=0;
        for(int i=0; i<n; i++){
           sum+=nums[i];
           if(sum > maxSum){
            maxSum = sum;
           }

           if(sum < 0){
            sum =0;
           }

        }

       return maxSum;
    }
};