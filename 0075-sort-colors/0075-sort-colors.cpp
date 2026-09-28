// class Solution {
// public:
//     void sortColors(vector<int>& nums) {

//         int zero = 0, one = 0, two = 0;

//         for (int num : nums) {
//             if (num == 0)
//                 zero++;
//             else if (num == 1)
//                 one++;
//             else
//                 two++;
//         }

//         int i = 0;

//         while (zero--)
//             nums[i++] = 0;

//         while (one--)
//             nums[i++] = 1;

//         while (two--)
//             nums[i++] = 2;
//     }
// };



class Solution {
public:
    void sortColors(vector<int>& nums) {

       int n = nums.size();

      for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                swap(nums[i+1],nums[j]);
            }else if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }
        }
      }
    
    }
};
