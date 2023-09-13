class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> left(ratings.size(), 1);
        vector<int> right(ratings.size(), 1);
        vector<int> ans(ratings.size(), 1);

        // Left
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i] > ratings[i - 1]) {
                left[i] = left[i - 1] + 1;
            }
        }

        // Right
        for (int i = ratings.size() - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                right[i] = right[i + 1] + 1;
            }
        }

        for (int i = 0; i < ratings.size(); i++) {
            ans[i] = max(left[i], right[i]);
        }

        int res = accumulate(ans.begin(), ans.end(), 0);
        return res;
    }
};
