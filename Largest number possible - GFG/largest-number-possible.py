#User function Template for python3

class Solution:
    def findLargest(self, N, S):
        if S == 0:
            return '0' if N == 1 else -1
        ss = ''
        for i in range(N):
            m = min(9, S)
            ss += str(m)
            S -= m
        return ss if S == 0 else -1
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, S = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.findLargest(N, S))
# } Driver Code Ends