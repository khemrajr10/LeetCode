// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//      int n= nums.size();
    

//     if(nums.empty()) return 0;
//      sort(nums.begin(),nums.end());
//      int longest =1;
//      int currCount = 0;
//      int smallest = INT_MIN;

//      for(int i=0; i<n; i++){
//         if(nums[i]-1 == smallest){
//             smallest = nums[i];
//             currCount++;
//         }else if (nums[i] != smallest){
//             currCount =1;
//             smallest = nums[i];
//         }
//         longest  =  max(longest , currCount);
//      }   
//      return longest;
//     }
// };


// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//      int n= nums.size();
//      if(n ==0 ) return 0;

//      int longest = 1;

//      unordered_set<int>st;

//      for(int i=0; i<n; i++){
//         st.insert(nums[i]);
//      }


//      for(auto it: st){
//         if(st.find(it-1) == st.end()){
//             int count =1;
//             int x = it;

//             while(st.find(x+1) != st.end()){
//                 x=x+1;
//                 count++;
//             }
//             longest= max(longest,count);
//         }
//      }

//      return longest;
    

//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    
        map<int,int> mp;

        if(nums.empty()) return 0;

        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        int count = 1;
        int maxCount = 1;

        
       for(auto it = mp.begin(); it != mp.end(); it++) {

    auto nextIt = next(it);

    if(nextIt != mp.end()) {

        if(it->first + 1 == nextIt->first) {
            count++;
        }else{
            count = 1;
        }

        maxCount =  max(maxCount,count);
            
            
        
        
    }
    
}
        
        return maxCount;

    }
};




  