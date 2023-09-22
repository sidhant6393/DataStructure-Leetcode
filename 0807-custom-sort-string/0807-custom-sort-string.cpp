class Solution {
public:
    string customSortString(string order, string s) {
        string common = "";
        map<char, int> mp;
        for(auto it : s) mp[it]++;
        
        for(auto it : order) {
            if(mp.find(it) != mp.end()) {
                int cnt = mp[it];
                // cout << cnt << " ";
                while(cnt--) common += it;
            }
        }
        string remaining_of_s="";
        mp.clear();
        for(auto it : order) mp[it]++;

        for(int i = 0; i < s.size(); i++) {
            if(mp.find(s[i]) == mp.end()) {
                remaining_of_s+=s[i];
            }
        }
        return common+remaining_of_s;
    }
};