class Solution {
public:
    pair<int,int> getMaxRow(vector<vector<int>>& score,int k,int start){
        int maxi=INT_MIN;
        int pos=0;
        for(int i=start;i<score.size();i++){
            maxi=max(maxi,score[i][k]);
        }
        // return maxi;
        for(int i=0;i<score.size();i++){
            for(int j=0;j<score[0].size();j++){
                if(maxi==score[i][j]){
                    pos=i;
                    return{maxi,pos};
                }
            }
        }
        return {maxi,pos};
    }
    void swapFunction(int upRow,int downRow,vector<vector<int>>& score,int k){
        for(int i=0;i<score[0].size();i++){
            swap(score[upRow][i],score[downRow][i]);
        }
    }
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size();i++){
            pair<int,int> maxScore= getMaxRow(score,k,i);
            //swap ith row with max contain row
            swapFunction(i,maxScore.second,score,k);
        }
        return score;
    }
};