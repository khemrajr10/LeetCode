class Solution {
public:
    bool isValid(string s) {

        while(s.length() > 0) {
          bool found = false;

          for(int i = 0; i < s.length() - 1; i++) {

                if((s[i] == '(' && s[i+1] == ')') ||
                   (s[i] == '[' && s[i+1] == ']') ||
                   (s[i] == '{' && s[i+1] == '}')) {

                    s.erase(i, 2);
                    found = true;
                    break;
                }
            }
            if(found == false) {
                return false;
            }
        }
        return true;
    }
};