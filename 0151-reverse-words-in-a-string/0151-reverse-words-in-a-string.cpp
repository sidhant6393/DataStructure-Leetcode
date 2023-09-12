class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for(int i=0;i<s.size();i++){
            while(i<s.size()&&s[i]!=' '){
                temp+=s[i++];
            }
            if(temp!=""){
                if(ans==""){
                    ans=temp;
                }else{
                    ans=temp+ " "+ans;
                }
            }
            temp="";
        }
        return ans;
    }
};