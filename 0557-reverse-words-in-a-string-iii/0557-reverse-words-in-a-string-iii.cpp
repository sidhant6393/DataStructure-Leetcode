class Solution {
public:
    void rev(string temp,string &ans){
        int i=0;
        int j=temp.size()-1;
        while(i<=j){
            swap(temp[i++],temp[j--]);
        }
        if(ans.size()==0) ans+=temp;
        else ans=ans+" "+temp;
    }
    string reverseWords(string s) {
        string temp="";
        string ans="";
        int size=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }else{
                rev(temp,ans);
                temp="";
            }
            
        }
        rev(temp,ans);
        return ans;
    }
};