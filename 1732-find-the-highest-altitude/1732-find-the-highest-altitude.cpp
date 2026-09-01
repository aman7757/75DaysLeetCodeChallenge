class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0, current = 0;
        for (int g : gain) {
            current += g;
            maxAlt = max(maxAlt, current);
        }
        return maxAlt;
    }
};