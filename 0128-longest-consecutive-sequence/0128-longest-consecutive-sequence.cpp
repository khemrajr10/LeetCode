class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n= nums.size();
    

    if(nums.empty()) return 0;
     sort(nums.begin(),nums.end());
     int longest =1;
     int currCount = 0;
     int smallest = INT_MIN;

     for(int i=0; i<n; i++){
        if(nums[i]-1 == smallest){
            smallest = nums[i];
            currCount++;
        }else if (nums[i] != smallest){
            currCount =1;
            smallest = nums[i];
        }
        longest  =  max(longest , currCount);
     }   
     return longest;
    }
};