
class Solution {
public:
    string largestOddNumber(string num) {

        for (int i = 0; i < num.length(); i++) {
            if (num[i] == '0') {
                num.erase(i, 1);
                i = -1;
            } else {
                break;
            }
        }

        string ans = "";
        int e = num.size() - 1;

        while (e >= 0) {
            if ((num[e] - '0') % 2 == 1) {
                ans = num.substr(0, e + 1);
                break;
            } else {
                e--;
            }
        }

        return ans;
    }
};
