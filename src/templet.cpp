#include<bits/stdc++.h>

using namespace std;

int t, n, r, sum, k;
int s[100];
int w[100][100];
int z[100];
int v[100];
int cnt;

void solve() {
    puts("Input person numbers:");
    scanf("%d", &n);
    puts("Input all person names:");
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &s[i]);
        v[i] = 1;
        if (s[i] == 1)r = i;
        z[i] = 1;
    }
    puts("Input every person property:");
    for (int i = 1; i <= n; ++i) {
        printf("--> %d :", i);
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &w[i][j]);
        }
    }
    sum = 0;
    if (sum <= 2) {
        puts("langren");
        return;
    }
}

int main() {
    puts("Input time:");
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
