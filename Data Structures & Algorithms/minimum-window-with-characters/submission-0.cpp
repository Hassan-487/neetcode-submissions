class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> targetCount(128, 0);
        for (char c : t) targetCount[c]++;
        
        int left = 0, right = 0;
        int missingLetters = t.length();
        int minStart = 0, minLength = INT_MAX;

        while (right < s.length()) {
            if (targetCount[s[right]] > 0) {
                missingLetters--;
            }
            targetCount[s[right]]--;
            right++; // Move right forward

            while (missingLetters == 0) {
                if (right - left < minLength) {
                    minLength = right - left;
                    minStart = left;
                }

                targetCount[s[left]]++;
                if (targetCount[s[left]] > 0) {
                    missingLetters++; 
                }
                left++; 
            }
        }

        return minLength == INT_MAX ? "" : s.substr(minStart, minLength);
    }
};