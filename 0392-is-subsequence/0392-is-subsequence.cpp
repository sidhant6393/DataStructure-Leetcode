class Solution {
public:
    int low=0;
    bool is_between(char s,string t,int high){
        for(int i=low;i<high;i++){
            if(s==t[i]){
                low=i+1;
                return true;
            }
        }
        return false;
    }
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(is_between(s[i],t,t.size())){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};