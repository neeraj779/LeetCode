class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> adj[n];
        vector<int> id(n, 0);
        vector<int> ans;

        for(auto x: p){
            adj[x[0]].push_back(x[1]);
            id[x[1]]++;
        }

        queue<int> q;
        for(int i = 0; i < n; i++){
            if(id[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            auto t = q.front();
            ans.push_back(t);
            q.pop();

            for(auto x: adj[t]){
                id[x]--;
                if(id[x] == 0){
                    q.push(x);
                }
            }
        }
        return ans.size() == n;
    }
};