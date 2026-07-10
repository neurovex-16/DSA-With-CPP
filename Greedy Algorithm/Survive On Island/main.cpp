class Solution {
public:
    int minimumDays(int S, int N, int M) {

        // Can't buy enough food for even one day
        if (N < M)
            return -1;

        // Can't survive the first Sunday
        if (S >= 7 && 6 * N < 7 * M)
            return -1;

        int sunday = S / 7;
        int buyingDays = S - sunday;

        int totalFood = S * M;

        int ans = (totalFood + N - 1) / N;   // ceil(totalFood / N)

        if (ans <= buyingDays)
            return ans;

        return -1;
    }
};