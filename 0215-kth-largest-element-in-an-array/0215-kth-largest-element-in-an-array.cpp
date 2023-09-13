#include <vector>
#include <queue>

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> maxHeap;
        for (auto it : nums) {
            maxHeap.push(it);
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        return maxHeap.top();
    }
};
