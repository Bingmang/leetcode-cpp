#include <cmath>

class Solution {
public:
    int numSquares(int n) {
        // Lagrange四平方定理：任何一个正整数都可以表示成不超过四个整数的平方之和。
        // 推论：满足四数平方和定理的数n（四个整数的情况），必定满足 n=4^a(8b+7)。
        while (n % 4 == 0)
            n /= 4;

        if (n % 8 == 7)
            return 4;

        int a = 0;
        while (a * a <= n) {
            int b = (int)sqrt(n - a * a);
            if (a * a + b * b == n) {
                return (a ==0 || b == 0) ? 1 : 2;
            }
            a++;
        }
        return 3;
    }
};
