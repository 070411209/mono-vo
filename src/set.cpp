#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    //创建一个空的unordered_set容器
    std::unordered_set<std::string> uset;
    //给 uset 容器添加数据
    uset.emplace("http://c.biancheng.net/java/");
    uset.emplace("http://c.biancheng.net/c/");
    uset.emplace("http://c.biancheng.net/python/");
    uset.emplace("http://c.biancheng.net/python3.7/");
    uset.emplace("http://c.biancheng.net/c/");
    //查看当前 uset 容器存储元素的个数
    cout << "unorder set size = " << uset.size() << endl;
    //遍历输出 uset 容器存储的所有元素
    for (auto iter = uset.begin(); iter != uset.end(); ++iter) {
        cout << *iter << endl;
    }
    return 0;
}