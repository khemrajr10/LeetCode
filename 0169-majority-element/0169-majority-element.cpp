class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int num : nums) {
            mp[num]++;
        }

        for(auto it : mp) {
            if(it.second > n / 2) {
                return it.first;
            }
        }

        return -1;
    }
};