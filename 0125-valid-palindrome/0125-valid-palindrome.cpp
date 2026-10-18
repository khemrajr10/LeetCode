class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string ans = "";

        for(int i=0; i<n; i++){
           if(s[i] >='a' && s[i] <='z' ||
              s[i]>='A' && s[i] <='Z'||
              s[i] >= '0' && s[i] <= '9') {
                  ans += tolower(s[i]);
            }
        }
        
        string revAns = ans;
        int st=0;
        int e = revAns.length()-1;

        while(st < e){
            swap(revAns[st],revAns[e]);
            st++;
            e--;
        }

        if(ans == revAns || s == ""){
            return true;
        }else{
            return false;
        }
    
        
    }
};