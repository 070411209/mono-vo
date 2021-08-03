#include<cstdio>
#include<queue>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
const int M=55;
inline int read(){
    char c=getchar();
    int x=0,f=1;
    for(;c<'0'||c>'9';c=getchar())
        if(c=='-')f=0;
    for(;c<='9'&&c>='0';c=getchar())
        x=(x<<1)+(x<<3)+(c^48);
    return f?x:-x;
}
int a[M][M],lang,die[M],n;
inline int kill(int x){
    for(int i=1;i<=n;i++)if(!die[a[x][i]])return a[x][i];
}
int main(){
    int T;
    while (1)
    {   
        printf("Input T:");
        T=read();
        printf("T out: %d\n", T);
    }
    

    return 0;
}