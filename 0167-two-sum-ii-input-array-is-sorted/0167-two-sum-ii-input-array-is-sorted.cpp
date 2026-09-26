class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();

        int s= 0;
        int l =n-1;
        while(s < l){
            int sum = numbers[s]+numbers[l];
            if(sum ==  target){
                return{s+1,l+1};
            }else if(sum>target){
                l--;
            }else{
                s++;
            }
        }

        return {};
        
    }
};