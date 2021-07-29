#include<cstdio>
#include<queue>
using namespace std;
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        printf("%d\n",m^1);
    }
    return 0;
}