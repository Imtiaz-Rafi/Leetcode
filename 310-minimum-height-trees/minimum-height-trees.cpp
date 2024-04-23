class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1){
            return {0};
        }

        unordered_map<int, vector<int>> graph;
        vector<int> deg(n,0);

        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(deg[i] == 1)
                q.push(i);
        }

        int rem = n;
        while(rem > 2){
            int sz = q.size();
            rem -= sz;
            
            for(int i=0;i<sz;i++){
                int leaf = q.front();
                q.pop();
                for(int n: graph[leaf]){
                    deg[n]--;
                    if(deg[n] == 1){
                        q.push(n);
                    }
                }
            }
        }

        vector<int>res;
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};