class Solution {
public:
    string removeOccurrences(string s, string part) {

        for(int i=0; i<s.length(); i++){
            if(i == s.find(part)){
                s.erase(i,part.length());
                i=-1;
            }
            
        }
        return s;
        
    }
};