class Solution {
public:
    int maxArea(vector<int>& heights) {
       int left=0,right=heights.size()-1;
       int result =0;
       while(left<=right){
        int area=(right-left)*min(heights[left],heights[right]);
        result=max(result,area);
        if(heights[left]<heights[right])
           left++;
        else 
          right--;   
       }
       return result; 
    }
};
