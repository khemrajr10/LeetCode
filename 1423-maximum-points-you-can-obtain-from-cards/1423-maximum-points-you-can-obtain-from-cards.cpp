class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left=0;
        int right=cardPoints.size()-1;

        int winSum=0;
        int maxSum=0;

        for(int i=0; i<k; i++){
            winSum+=cardPoints[i];
        }

        maxSum=winSum;

        for(int i=k-1; i>=0; i--){
            winSum = winSum - cardPoints[i] + cardPoints[right];
            right--;

            maxSum = max(maxSum,winSum);
        }

        return maxSum;

    }
};