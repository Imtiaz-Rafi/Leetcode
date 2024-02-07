class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (auto x : s)
            mp[x]++; // mp[A] = 1, mp[a] = 1, mp[b] = 2

        vector<pair<char, int>> vec {mp.begin(), mp.end()}; //{A,1}, {a,1}, {b,2}

        sort(vec.begin(), vec.end(), [](pair<char, int> l, pair<char, int> r) {
            return l.second > r.second;
        });
        // {b,2}, {A,1}, {a,1}

        string str;
        for (auto x : vec) {
            while (x.second > 0) {
                str += x.first;     //str = bbAa
                x.second--;
            }
        }
        return str;

        // Time Complexity = O(N)
        // Space Complexity = O(N)
    }
};