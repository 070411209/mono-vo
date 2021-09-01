// 本题为考试单行多行输入输出规范示例，无需提交，不计分。
#include <iostream>
using namespace std;
int main() {
    int n;
    float res = 0.0;

    cin >> n;
    int i = 1;
    long d = 1;

    while (i <= n)
    {
        d = d * i;
        res += (float)1/d;
        // cout << "--->i=" << i << ", d=" << d << ", res=" << res << endl;
        i++;
    }
    
    cout << res << endl;
    return 0;
}