class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            if (mp1.find(a) != mp1.end()) {
                if (mp1[a] != b)
                    return false;
            }

            if (mp2.find(b) != mp2.end()) {
                if (mp2[b] != a)
                    return false;
            }

            mp1[a] = b;
            mp2[b] = a;
        }

        return true;
    }
};