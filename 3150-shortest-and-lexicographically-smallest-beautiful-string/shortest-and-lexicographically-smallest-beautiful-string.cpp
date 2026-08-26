class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string as =s;
        if(s.size()<k){
            return "";
        }
        int a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                a++;
            }
        }
        if(a<k){
            return "";
        }
        for(int i=0; i<s.size(); i++){
            string ans ="";
            int n=0;
            for(int j=i;j<s.size(); j++){
                ans = ans+s[j];
                if(s[j]=='1'){
                    n++;
                }
                if(n>=k){
                    break;
                }
            }
            if(as.size()>ans.size()&& n==k){
                as =ans;
            }
            if(as.size()==ans.size()&&n==k){
                for(int b=0;b<as.size();b++){
                    if(as[b]!=ans[b]){
                        if(as[b]=='1'){
                            as = ans;
                        }else{
                            break;
                        }
                    }
                }
            }
        }
        return as;
    }
};