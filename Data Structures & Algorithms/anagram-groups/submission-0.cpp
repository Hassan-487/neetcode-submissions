class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<vector<int>,vector<string>> maps;
    for (string i:strs){
        vector<int> arr(26,0);
      for (char c:i){
       arr[c-'a']++;
      }
      maps[arr].push_back(i);
    }
      vector<vector<string>> output;
     for (auto &p : maps) {
            output.push_back(p.second);
           
        }

        return output;
    }
};
