class Solution {
public:
    bool winnerOfGame(string s) {
        int turnAlice=0;
        int turnBob=0;
        if(s.size()<3){
            return false;
        }
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='A'&&s[i-1]=='A'&& s[i+1]=='A') turnAlice++;
            else if(s[i]=='B'&&s[i-1]=='B'&& s[i+1]=='B') turnBob++;
        }
        return turnAlice>turnBob;
    }
};