
class Solution {
public:
    bool checkfrequency(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            int s1idx = s1[i] - 'a';
            freq[s1idx]++;
        }

        int windowSize = s1.length();

        if (windowSize > s2.length()) {
            return false;
        }

        int windowFreq[26] = {0};

        
        for (int i = 0; i < windowSize; i++) {
            int s2idx = s2[i] - 'a';
            windowFreq[s2idx]++;
        }

        if (checkfrequency(freq, windowFreq)) {
            return true;
        }

        
        for (int i = windowSize; i < s2.length(); i++) {
            windowFreq[s2[i] - 'a']++;
            windowFreq[s2[i - windowSize] - 'a']--;

            if (checkfrequency(freq, windowFreq)) {
                return true;
            }
        }

        return false;
    }
};