class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int n = letters.size();
       int s=0;
       int e=n-1;
       int ans = n;

       while(s <= e){
        int mid = s +(e-s)/2;

        if(letters[mid] <= target){
            s = mid +1;
        }else{
            e =mid-1;
            ans = mid;
        }
       }
       return letters[ans % n]; 
    }
};