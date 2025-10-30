class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> g(n);
        for(auto &e : edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        
        vector<bool> vis(n, false);
        queue<int> q;
        q.push(start);
        vis[start] = true;
        
        while(!q.empty()){
            int u = q.front(); 
            q.pop();
            if(u == end) return true;
            
            for(int v : g[u])
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
        }
        return false;
    }
};
