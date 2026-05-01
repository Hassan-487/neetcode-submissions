class Solution {
public:

    string encode(vector<string>& strs) {
        
        string input;

        input += to_string(strs.size()) + ",";
        for(string s:strs){
            int length=0;
            for(char i:s ){
                length++;
            }
           input += to_string(length) + ",";
        }
        for (string s:strs){
            input+=s;
        }
        cout<<input<<endl;
        return input;
    }

    vector<string> decode(string s) {
        vector<string> output;
        // {"",""}
        cout<<s;
       int i = 0;

    string size = "";
    while (s[i] != ',') {
        size += s[i];
        i++;
    }
    int totalstings = stoi(size);
    i++;
    vector<int> lengthsofstrings;

  for(int j=0;j<totalstings;j++){
     string len="";
     while(s[i]!=','){
        len+=s[i];
        i++;
     }
     lengthsofstrings.push_back(stoi(len));
     i++;
  }
  cout<< "i->"<<i<<" "<<s[i-1];
        // cout<<endl;
        // for(int&p:lengthsofstrings){
        //     cout<<p;
        // }
       // int l=lengthsofstrings;
       // s.substr(s.begin(i),s.end(lengthsofstrings))
   
    for (int l:lengthsofstrings){
    output.push_back(s.substr(i,l));
    i+=l;
    }
    
        return output;
        
    }
};
