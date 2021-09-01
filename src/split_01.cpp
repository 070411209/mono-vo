
// 本题为考试单行多行输入输出规范示例，无需提交，不计分。
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string n = "OUT:";
    vector<string> res;
    string tmp;
    char c;
    while (c != '\n')
    {
        c = getchar();
        if(c != ' ')
            tmp = tmp + c;
        
        if(c == ';' || c =='\n') {
            res.push_back(tmp);
            tmp.clear();
        }

        if(c == 'Y') {
            tmp.pop_back();
            tmp.pop_back();
            tmp.pop_back();
            if(tmp.back() != ':')
                tmp.pop_back();
        }    
        if(c == 'N') {
            tmp.pop_back();
        }

    }

    for(int i = 0; i < res.size(); i++) {
        cout << "res: " << res[i].size() << " " << res[i] << endl;
        if(res[i].size() < 7) {
            cout << "ddd " << endl;
            continue;
        }
            
        if(res[i][5] == ',')
            res[i].erase (res[i].begin()+5);

        n = n + res[i];
    }
        

    cout << n << endl;
    return 0;
}


