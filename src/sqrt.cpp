#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        int ans = exp(0.5 * log(x));
        return ((long long)(ans + 1) * (ans + 1) <= x ? ans + 1 : ans);
    }

    int mySqrt_1(int x) {
        if (x == 0) {
            return 0;
        }

        double C = x, x0 = x;
        while (true) {
            double xi = 0.5 * (x0 + C / x0);
            if (fabs(x0 - xi) < 1e-7) {
                break;
            }
            x0 = xi;
        }
        return int(x0);
    }

};

int main()
{
    int a;
    Solution c;
    cin >> a;
    printf("Input: %d\n", a);
    int b = c.mySqrt(a);
    printf("Output: %d\n", b);
    return 0;
}


