class Solution {
public:
    int distanceBetweenBusStops(vector<int>& dist, int start, int destination) {
        if(start > destination) swap(start, destination);
        int total = accumulate(dist.begin(), dist.end(), 0);
        int path = 0;
        for(int i = start; i < destination; i++)
            path += dist[i];
        return min(path, total - path);
    }
};
