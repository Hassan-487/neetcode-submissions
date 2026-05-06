class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int l=0;
        int result=0;
        for(int r=0;r<s.size();r++){
            while(mp.find(s[r])!=mp.end()){
                mp.erase(s[l]);
                l++;

            }
            mp.insert(s[r]);
            result=max(result,r-l+1);


        }
        return result;
    }
};
