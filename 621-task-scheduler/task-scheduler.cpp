class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int>m;
        int mx = 0;
        for(auto x:tasks){
            m[x]++;
            mx = max(mx, m[x]);
        }

        vector<pair<char,int>>v({m.begin(), m.end()});
        sort(v.begin(), v.end(), [](pair<char, int> &a, pair<char, int> &b) { 
            return a.second > b.second; 
        });
        
        bool ok = true;
        int idle = 0, total = 0;


        for(auto x:v){
            if(ok){
                total = mx + (mx - 1) * n;
                idle = total - x.second;
                ok = false;
            }else{
                if(mx == x.second && idle >= x.second){
                    idle -= (x.second - 1);
                    total += 1;
                }else{
                    total += max(0, (x.second - idle));
                    idle = max(0, (idle - x.second));
                }
            }
        }

        return total;
    }
};