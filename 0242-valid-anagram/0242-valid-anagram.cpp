class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
{
           return false;
}
        unordered_map<char,int>mp1;

        for(int i=0; i<s.length(); i++){
            mp1[s[i]]++;
        }

        unordered_map<char,int>mp2;

        for(int i=0; i<t.length(); i++){
            mp2[t[i]]++;
        }

       for(auto it:mp1){
        if(mp1[it.first] != mp2[it.first])
        {
        return false;
        }
    }

    return true;

    }
};