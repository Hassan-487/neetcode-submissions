class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int size=nums.size();
     int arr1[size]{1};  
      int arr2[size]{1};
     
     // int j=k-0;
      int left=1; // 1 2
      int right=1;
      for(int i=0;i<size;i++){
        arr1[i]=left;
        left=left*nums[i];
      }
     
      for(int i=size-1;i>=0;i--){
        //right=arr2[i];
        arr2[i]=right;
        right=right*nums[i];
      }
      
      vector <int> output(size);
      for(int i=0;i<size;i++){
        output[i]=arr1[i]*arr2[i];
      }
      
      return output;
    }
};
