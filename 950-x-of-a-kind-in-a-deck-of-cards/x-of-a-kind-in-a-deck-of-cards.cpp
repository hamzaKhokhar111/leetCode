class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int x : deck) mp[x]++;
        int g = 0;
        for(auto &p : mp) g = __gcd(g, p.second);
        return g >= 2;
    }
};
