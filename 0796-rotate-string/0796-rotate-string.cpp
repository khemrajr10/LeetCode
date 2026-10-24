class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();

        if (s.size() != goal.size()) {
            return false;
        }

        for (int i = 0; i < n; i++) {
            if (s == goal) {
                return true;
            }

            char st = s[0];

            for (int j = 0; j < n - 1; j++) {
                s[j] = s[j + 1];
            }

            s[n - 1] = st;
        }

        return false;
    }
};