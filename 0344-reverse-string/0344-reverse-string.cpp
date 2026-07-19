class Solution {
public:
    void reverseString(vector<char>& s) {

        int size = s.size();

        int start = 0;
        int end = size - 1;

        while(start < end){
            swap( s[start], s[end]);
            start++;
            end--;
        }

        for (int i=0; i<size; i++){
            cout << s[i] << " ";
        }
        
    }
};