#include <cstdio>
#include <algorithm>
using namespace std;
void scan(__int128 &x)//输入
{
    x = 0;
    int f = 1;
    char ch;
    if((ch = getchar()) == '-') f = -f;
    else x = x*10 + ch-'0';
    while((ch = getchar()) >= '0' && ch <= '9')
        x = x*10 + ch-'0';
    x *= f;
}
void print(__int128 x)
{
    if (!x) return ;
    if (x < 0) putchar('-'),x = -x;
    print(x / 10);
    putchar(x % 10 + '0');
}
__int128 n,a,b,mod=1e9+7;
__int128 num(__int128 x){
    if(x%2==0)    return min((x*x*x*b+(x-1)*x*x*a),(7*num(x/2)+18*(x/2)*(x/2)*a));
    return x*x*x*b+(x-1)*x*x*a;
}
int main(){
    __int128 t;
    printf("输入数据组数：");
    scan(t);
    for(__int128 k=1;k<=t;++k){
        printf("第%d组数据:", k);
        scan(n),scan(a),scan(b);
        printf("至少需要多少时间:");
        print(num(n)%mod);
        printf("\n");
    }
    return 0;
}