// better approach - Hashing 
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         map<int, int> mp;

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



//optimal approach - Moore's voting algorithm

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
        // when it is not metioned that majority element will alwz exits you have to checm the frequency of the element separtely 
        int count1=0;
        for(int i=0; i<n; i++){
            if(nums[i] == element) count1++;
        }
        if(count1 >n/2){
            return element;
        }
         return -1;
    }
   
};