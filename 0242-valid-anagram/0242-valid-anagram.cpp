// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         if( s.length() != t.length()){
//             return false;
//         }

//         unordered_map<char,int> freq1;
//          unordered_map<char,int> freq2;

//          for(int i=0; i<s.length(); i++){
//             freq1[s[i]]++;
//          }

//          for(int i=0; i<t.length(); i++){
//             freq2[t[i]]++;
//          }

//          if(freq1 == freq2){
//             return true;
//          }
//          return false;
//     }
// };


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};