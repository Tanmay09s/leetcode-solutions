class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        vector<int>inDegree(n,0);
        vector<bool>sus(n,false);

        for(auto &edge : invocations){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            inDegree[v]++;
        }

        //bfs
        queue<int>q;
        q.push(k);
        sus[k] = true;
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(int ngbr : adj[curr]){
                inDegree[ngbr]--;
                if(!sus[ngbr]){
                    q.push(ngbr);
                    sus[ngbr] = true;
                }
            }
        }

        vector<int>result;

        bool cannotRemove = false;

        for(int i=0;i<n;i++){
            if(sus[i] && inDegree[i] > 0){
                cannotRemove = true;
                break;
            }

            if(!sus[i]) {
                result.push_back(i);
            }
        }
        if(cannotRemove){
            vector<int>vec;
            for(int i=0;i<n;i++){
                vec.push_back(i);
            }
            return vec;
        }
        return result;
    }
};