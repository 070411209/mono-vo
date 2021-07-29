#include<cstdio>

int x[]={0,60,62,65,67,70,75,80,85,90,95,500};
int sum[]={0,10,17,20,23,27,30,33,37,40,43,-1000};

inline int max(int a,int b){return a>b?a:b;}

int dfs(int a,int s)
{
    if (s==1)
    {
        if (a>=95)    return 43;
        if (a>=90)    return 40;
        if (a>=85)    return 37;
        if (a>=80)    return 33;
        if (a>=75)    return 30;
        if (a>=70)    return 27;
        if (a>=67)    return 23;
        if (a>=65)    return 20;
        if (a>=62)    return 17;
        if (a>=60)    return 10;
        return 0;
    }

    int ans=0;
    for (int i=1;x[i]<=a;i++)
    {
        ans=max(ans,sum[i]+dfs(a-x[i],s-1));
    }
    return ans;
}



int main()
{
//    freopen("test.txt","r",stdin);
//    freopen("test.out","w",stdout);
    int t,a;
    scanf ("%d",&t);
    for (int i=1;i<=t;i++)
    {
        scanf ("%d",&a);
        int x=dfs(a,4);
        printf("%d.%d\n",x/10,x%10);
    }
}
