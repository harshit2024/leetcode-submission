class Solution {
public:
    string removeStars(string s) {
       int i=0;
        string str="";
       for(int i=0;i<s.size();i++){
           if(s[i]=='*'&& !str.empty()){
               str.pop_back();
           }
           else{
               str.push_back(s[i]);
           }
       }
        return str;
    }
};