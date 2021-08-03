#include<bits/stdc++.h>

using namespace std;

int t, n, r, sum, k;
int s[100];
int w[100][100];
int z[100];
int v[100];
int cnt;

void solve() {
    scanf("%d", &n);
    sum = n;
    cnt = 0;
    memset(w, 0, sizeof(w));
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &s[i]);
        v[i] = 1;
        if (s[i] == 1)r = i;
        z[i] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &w[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            sum++;
    sum = n - 1;
    k = w[r][z[r]];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cnt++;
    v[k] = 0;
    if (v[r] == 0) {
        puts("lieren");
        return;
    } else if (sum <= 2) {
        puts("langren");
        return;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cnt++;
    while (sum > 2) {
        while (v[w[k][z[k]]] == 0)++z[k];
        k = w[k][z[k]];
        v[k] = 0;
        --sum;
        if (v[r] == 0) {
            puts("lieren");
            break;
        } else if (sum <= 2) {
            puts("langren");
            break;
        }
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cnt++;
}

int main() {
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
