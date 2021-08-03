//by yjz
#include<bits/stdc++.h>
using namespace std;
#define FF first
#define SS second
#define PB push_back
#define MP make_pair
#ifndef LOCAL
#define cerr if(0)cout
#endif

// typedef 用来定义类型的别名
typedef long long ll;
typedef int int_16;


//My i/o stream
struct fastio
{
    char s[100000];
    int it, len;
    fastio() {it=len=0;}
    inline char get()
    {
        if (it<len) return s[it++]; it=0;
        len=fread(s, 1, 100000, stdin);
        if (len==0) return EOF; else return s[it++];
    }
    bool notend()
    {
        char c=get();
        while (c==' '||c=='\n') c=get();
        if (it>0) it--;
        return c!=EOF;
    }
}_buff;

// #define 不止可以为类型取别名, 还可以定义常量, 变量, 编译开关等
#define geti(x) x=getnum()
#define getii(x,y) geti(x),geti(y)
#define getiii(x,y,z) getii(x,y),geti(z)
#define puti(x) putnum(x),putchar(' ')
#define putii(x,y) puti(x),puti(y)
#define putiii(x,y,z) putii(x,y),puti(z)
#define putsi(x) putnum(x),putchar('\n')
#define putsii(x,y) puti(x),putsi(y)
#define putsiii(x,y,z) putii(x,y),putsi(z)
inline ll getnum()
{
    ll r=0; bool ng=0; char c; c=_buff.get();
    while (c!='-'&&(c<'0'||c>'9')) c=_buff.get();
    if (c=='-') ng=1, c=_buff.get();
    while (c>='0'&&c<='9') r=r*10+c-'0', c=_buff.get();
    return ng?-r:r;
}
template <class T> inline void putnum(T x)
{
    if (x<0) putchar('-'), x=-x;
    register short a[20]={}, sz=0;
    while (x) a[sz++]=x%10, x/=10;
    if(sz==0) putchar('0');
    for (int i=sz-1; i>=0; i--) putchar('0'+a[i]);
}
inline char getreal() {char c=_buff.get(); while (c<=32) c=_buff.get(); return c;}

const int mod = 1e9+7;
ll qpow(ll x, ll k) {return k==0? 1: 1ll*qpow(1ll*x*x%mod,k>>1)*(k&1?x:1)%mod;}

int T;
int n;
int a[55][55];
bool dead[55];
int find(int x)
{
    int i = 1;
    while (a[x][i]==x || dead[a[x][i]]) i++;
    return a[x][i];
}
void solve()
{
    geti(n);
    int wolf;
    for (int i=1; i<=n; i++)
    {
        int x;
        geti(x);
        if (x) wolf = i;
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            geti(a[i][j]);
        }
    }
    memset(dead, 0, sizeof(dead));
    int t = a[wolf][1], cnt = n;
    if (t==wolf)
    {
        puts("lieren");
        return;
    }
    while (true)
    {
        dead[t] = true;
        cnt--;
        if (cnt<=2)
        {
            puts("langren");
            return;
        }
        t = find(t);
        if (t==wolf)
        {
            puts("lieren");
            return;
        }
    }
}
int main()
{
    geti(T);
    while (T--)
    {
        solve();
    }
    return 0;
}
