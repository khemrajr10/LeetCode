// brute force appraoch which usess o(n raise to 2)

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();

//         int profit = 0;

//         for(int i= 0; i<n; i++){
//             int diff = 0;
//             for(int j=i+1; j<n; j++){
//                 diff= prices[j] - prices[i];
//                 profit= max(profit,diff);
//             }
//         }
//         return profit;
//     }
// };


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int profit = 0;

        for(int i=1; i<n; i++){
            int diff = prices[i]-mini;
            profit =  max(profit,diff);
            mini =  min(mini,prices[i]);
        }

       
        return profit;
    }
};