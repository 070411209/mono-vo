#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
const int maxn=3020;

int a[maxn], fa[maxn];

int getfa(int x) {
    return fa[x]==x?x:fa[x]=getfa(fa[x]);
}

int main() {
    int n, m;
    while(~scanf("%d%d", &n, &m)) {
        for(int i=1; i<=n; ++i) fa[i]=i, a[i]=0; 
        for(int i=1, x, y, w; i<=m; ++i) {
            scanf("%d%d%d", &x, &y, &w);
            if(x!=y) a[x]+=w, a[y]+=w; 
            fa[getfa(x)]=getfa(y);
        }
        int f=1;
        for(int i=1; i<=n; ++i) f&=getfa(i)==getfa(1);
        if(!f) printf("0\n");
            else printf("%d\n", *min_element(a+1, a+n+1));
    }
    return 0;
}