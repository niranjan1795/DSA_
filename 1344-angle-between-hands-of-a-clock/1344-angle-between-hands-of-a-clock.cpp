class Solution {
public:
    double angleClock(int h, int m) {
        double bigHand = m * 6.0;
        double smallHand = 30.0 * (h % 12) + 0.5 * m;
        double dif = fabs(bigHand - smallHand);
        return min(dif, 360 - dif);
    }
};