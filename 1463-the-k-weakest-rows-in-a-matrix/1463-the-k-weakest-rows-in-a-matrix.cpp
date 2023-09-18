class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> strong;
        for(int i=0;i<mat.size();i++){
            int sum=accumulate(mat[i].begin(),mat[i].end(),0);
            strong.push({sum,i});
            if(strong.size()>k){
                strong.pop();
            }
        }
        vector<int>v;
        while(k--){
            int elem=strong.top().second;
            strong.pop();
            v.push_back(elem);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};