#include<bits/stdc++.h>

using namespace std;

int a[110],b[110];
int ans[110];

int main()
{
    int T,m,n;
    int ret = 0;
    int lr_idx;
    vector<string> vret;
    // printf("------> 输入几组测试数据: ");
    scanf("%d",&T);
    while(T--)
    {
        // printf("------> 对于每组数据，第一行一个整数表示n位玩家: ");
        scanf("%d", &n);
        // printf("------> 之后一行n个整数表示每个人的身份，第 i 个整数为1则表示i是狼人，0则表示i是猎人: \n");
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        // printf("每个人的身份: ");
        for(int i=0; i<n; i++) {
            // printf("%d ", a[i]);
        }
        // printf("\n");
        vector<vector<int>> b(n, vector<int>(n, 0));
        // printf("之后n行，一行n个数，从这里开始的第i行表示编号i的人想杀死的人的排名表:\n");   
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d",&b[i][j]);
            }
        }
        // // 打印
        // for(int i = 0; i < n; i++) {
        //     if(a[i] == 0)
        //         printf("第 %d 是猎人,死亡时想打死的人的排名表：", i+1);
        //     else
        //         printf("第 %d 是狼人,其第一天晚上会杀死的人的排名表：", i+1);

        //     for(int j = 0; j < n; j++) {
        //         printf("%d ", b[i][j]);
        //     }
        //     printf("\n");
        // }

        // play game
        for(int i = 0; i < n; i++) {
            if(a[i] == 1)
                lr_idx = i;
        }
        // printf("狼人的编号： %d\n", lr_idx);

        int num = n;
        vector<int> kill_idx(n, INT_MAX);
        vector<int> curr_idx(n, 0);
        while (1)
        {
            num--;
            // printf("剩余人数: %d\n", num);
            /* code */
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
        // std::cout << "------> ret: " << ret << std::endl;
        string res = (ret == 0) ? "lieren" : "langren";
        // cout << "游戏的结果: " << res << std::endl;
        // cout << res << std::endl;
        vret.push_back(res);
    }

    for(vector<string>::iterator it = vret.begin() ;it !=vret.end() ; it++) 
    {  
        cout << *it << endl;
    }     
    // printf("--------------Finish--------------\n");

    return 0;
}