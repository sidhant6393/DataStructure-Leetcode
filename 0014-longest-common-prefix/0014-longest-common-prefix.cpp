class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());//sort the string for compare to smallest and largest string
        string s1=strs[0];//point out to starting string of strs
        int size=strs.size();
        string s2=strs[size-1];
        string ans="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]){
                ans+=s1[i];
            }else break;
        }
        return ans;
    }
};