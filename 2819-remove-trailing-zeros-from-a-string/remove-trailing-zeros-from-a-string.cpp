class Solution {
public:
    string removeTrailingZeros(string num) {
        string s=num;
        while(s[s.size()-1]=='0'){
            s= s.substr(0,s.size()-1);
        }
        return s;
        
    }
};