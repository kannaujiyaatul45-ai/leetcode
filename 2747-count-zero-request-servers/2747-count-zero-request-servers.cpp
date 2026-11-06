class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs,
                             int x, vector<int>& queries) {

        // 1. Sort logs according to time
        sort(logs.begin(), logs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int m = queries.size();

        // Store {query value, original index}
        vector<pair<int, int>> q;

        for (int i = 0; i < m; i++) {
            q.push_back({queries[i], i});
        }

        // 2. Sort queries
        sort(q.begin(), q.end());

        vector<int> ans(m);

        // count[server] = number of requests
        // of this server inside current window
        vector<int> count(n + 1, 0);

        int left = 0;
        int right = 0;

        // Number of different servers having requests
        int activeServers = 0;

        for (auto [time, index] : q) {

            int start = time - x;
            int end = time;

            // Add logs whose time <= end
            while (right < logs.size() &&
                   logs[right][1] <= end) {

                int server = logs[right][0];

                if (count[server] == 0) {
                    activeServers++;
                }

                count[server]++;
                right++;
            }

            // Remove logs whose time < start
            while (left < logs.size() &&
                   logs[left][1] < start) {

                int server = logs[left][0];

                count[server]--;

                if (count[server] == 0) {
                    activeServers--;
                }

                left++;
            }

            // Servers without any request
            ans[index] = n - activeServers;
        }

        return ans;
    }
};