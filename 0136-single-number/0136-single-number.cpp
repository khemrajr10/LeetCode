class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();

        int xorr=0;

        for(int i=0; i<n; i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
        
        
    }
};


/*

int n= nums.size();

        unordered_map<int,int>freq;

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }

        for(auto it: freq){
            if(it.second == 1){
                return it.first;
            }
        }

*/