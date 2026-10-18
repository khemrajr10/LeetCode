
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         for (int i = 0; i + 1 < s.length(); i++) {
//             if (s[i] == s[i + 1]) {
//                 s.erase(i, 2);
//                 i = -1;
//             }
//         }
//         return s;
//     }
// };


// stack approach  tc-o(n)
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (!ans.empty() && ans.back() == s[i]) {
                ans.pop_back();
            } else {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};
