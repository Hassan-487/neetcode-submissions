class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numbermap;
        int diff = 0;

        for(int i = 0; i < nums.size(); i++){
            diff = target - nums[i];

            if(numbermap.find(diff) != numbermap.end()){
                return {numbermap[diff], i};
            } 
            numbermap[nums[i]] = i;
        }

        return {}; 
    }
};