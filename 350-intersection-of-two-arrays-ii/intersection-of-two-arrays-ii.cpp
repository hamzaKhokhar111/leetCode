class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        unordered_map<int,int> m;
        for(int x:a) m[x]++;
        vector<int> ans;
        for(int x:b) if(m[x]-- > 0) ans.push_back(x);
        return ans;
    }
};
