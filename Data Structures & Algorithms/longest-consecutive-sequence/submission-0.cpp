class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        map<int,int>maps;
        for(int i=0;i<nums.size();i++)
        {
            maps[nums[i]]=0;
        }
        int length=1;
        int new_length=1;
        int temp;
        for(auto&p:maps)
        {
            temp=p.first;
            break;
        }
        for(auto&p:maps)
        {
            if(p.first==temp+1)
            {
                length++;
                temp=p.first;
            }
            
            //2 3 4 5 10 20
            else
            {
                temp=p.first;
                if(length>new_length)
                new_length=length;
                length=1;
            }
        }
        if(new_length>length)
        return new_length;
        else return length;
    }
};