class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) {
            return 1;
        }

        double halfPow = myPow(x, n/2);
        double halfPowSquare = halfPow * halfPow;

        if(n%2 != 0) {
            //odd
            if(n>0) {
                return x *halfPowSquare;
            } else {
                return halfPowSquare / x;
            }
        }
        return halfPowSquare;
    }
};