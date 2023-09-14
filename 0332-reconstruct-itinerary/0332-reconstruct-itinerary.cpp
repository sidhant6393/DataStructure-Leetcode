class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> mp;
        vector<string> itinerary;
        
        // Store the adjacency list using multiset for sorted destinations
        for (const auto& ticket : tickets) {
            mp[ticket[0]].insert(ticket[1]);
        }
        
        // Start the DFS from JFK
        dfs("JFK", mp, itinerary);
        
        // Reverse the itinerary to get the correct order
        reverse(itinerary.begin(), itinerary.end());
        
        return itinerary;
    }
    
    void dfs(const string& airport, unordered_map<string, multiset<string>>& mp, vector<string>& itinerary) {
        while (!mp[airport].empty()) {
            string nextAirport = *mp[airport].begin(); // Get the smallest destination
            mp[airport].erase(mp[airport].begin()); // Remove the destination
            dfs(nextAirport, mp, itinerary); // Recursively visit the next airport
        }
        itinerary.push_back(airport); // Add the airport to the itinerary
    }
};
