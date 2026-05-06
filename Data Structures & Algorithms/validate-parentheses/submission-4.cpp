class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        vector<char> arr(n);
        int c=0;
        for( int i=0;i<n;i++){
            
            if(s[i]== '(' ||s[i]== '{'||  s[i]== '[' )
              arr[c++]= s[i];
              else {
                if(c==0) return false;
                if (s[i]== ')' && arr[c-1]== '(') c--;
                else if (s[i]== '}' && arr[c-1]== '{') c--;
                else if (s[i]== ']' && arr[c-1]== '[') c--;
                else return false;
              
              }
              
        }
        if(c==0) return true;
        else return false;
    }
};
