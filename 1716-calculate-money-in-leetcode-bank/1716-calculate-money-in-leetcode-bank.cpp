class Solution {
public:
    int totalMoney(int n) {
        int ans = 0, week = 0;
        for (int i = 0; i < n; i++) {
            ans += i % 7 + 1 + week;
            if (i % 7 == 6) week++;
        }
        return ans;
    }
};