class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(auto it:stones) mp[it]++;
        int i=0;
        int count=0;
        while(i<jewels.size()){
            if(mp.find(jewels[i])!=mp.end()){
                count+=mp[jewels[i]];
            }
            i++;
        }
        return count;
    }
};