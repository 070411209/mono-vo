#include<bits/stdc++.h>

using namespace std;

int a[110],b[110];

int main()
{
    int T,m,n;
    int ret = 0;
    int lr_idx;
    vector<int> vret;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        vector<vector<int>> b(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d",&b[i][j]);
            }
        }
        // play game
        for(int i = 0; i < n; i++) {
            if(a[i] == 1)
                lr_idx = i;
        }

        int num = n;
        vector<int> kill_idx(n, INT_MAX);
        vector<int> curr_idx(n, 0);
        while (1)
        {
            num--;

            if(num <= 2) {
                ret = 1;
                break;
            }

            // 狼人杀人
            int kill_person = INT_MAX;
            for(int i = curr_idx[lr_idx]; i < n; i++) { // 从排名表中杀人
                if(b[lr_idx][i] != lr_idx) {  // 滤除自己编号
                    kill_person = b[lr_idx][i];
                    curr_idx[lr_idx]++;
                    break;
                }
                else
                    i++;
            }

            // 猎人开枪
            for(int i = curr_idx[kill_person]; i < n; i++) {
                if(b[kill_person][i] != kill_person) {
                    kill_person = b[kill_person][i];
                    curr_idx[kill_person]++;
                    break;
                }
                else
                    i++;
            }

            if(kill_person == lr_idx) {
                ret = 0;
                break;                
            }
        }

        vret.push_back(ret);
    }

    for(vector<int>::iterator it = vret.begin() ;it !=vret.end() ; it++) 
    {  
        if(*it == 0)
            printf("lieren\n");
        else
            printf("langren\n");
    }     

    return 0;
}