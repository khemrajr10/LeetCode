// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> mp;

//         for(int num : nums) {
//             mp[num]++;
//         }

//         for(auto it : mp) {
//             if(it.second > n / 2) {
//                 return it.first;
//             }
//         }

//         return -1;
//     }
// };



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int element;
        for( int i=0; i<n; i++){
            if(count == 0){
                count++;
                element = nums[i];
            }
            else if(nums[i] ==  element){
                count++;
            }else{
                count--;
            }

            
        }
        return element;
    }
};