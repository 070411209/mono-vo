#include<bits/stdc++.h>
#define MAXN 1005
using namespace std;
int dp[MAXN];
bool path[110][MAXN];
int a[110],b[110];
int ans[110];
int main()
{
    int T,m,n;
    int Case=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&m,&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&a[i],&b[i]);
        }
        memset(dp,0,sizeof(dp));
        memset(path,false,sizeof(path));
        for(int i=1;i<=n;i++)
        {
            for(int j=m;j>=b[i];j--)
            {
                if(dp[j]<dp[j-b[i]]+a[i])
                {
                    dp[j]=dp[j-b[i]]+a[i];
                    path[i][j]=true;
                }
            }
        }
        printf("Case #%d:\n", ++Case);
        int pos=m,sum=0,index=0;
        for(int i=n;i>=1 && pos>=0;i--)
        {
            if(path[i][pos]){
                ans[index++]=i;
                sum+=b[i];
                pos-=b[i];
            }
        }
        printf("%d %d\n",dp[m],sum);
        if(index==0) continue;
        
        for(int i=index-1;i>0;i--)
        {
            printf("%d ",ans[i]);
        }
        printf("%d\n", ans[0]);
    }
    return 0;
}