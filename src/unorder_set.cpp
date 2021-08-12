
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //创建一个空的unordered_set容器
    std::unordered_set<std::string> uset;
    //给 uset 容器添加数据
    uset.emplace("http");
    uset.emplace("http");
    uset.emplace("http");
    //查看当前 uset 容器存储元素的个数
    cout << "uset size = " << uset.size() << endl;
    //遍历输出 uset 容器存储的所有元素
    for (auto iter = uset.begin(); iter != uset.end(); ++iter) {
        cout << *iter << endl;
    }


    unordered_set<int> sampleSet; 
  
    // Inserting elements 
    sampleSet.insert(5); 
    sampleSet.insert(10); 
    sampleSet.insert(15); 
    sampleSet.insert(20); 
    sampleSet.insert(25); 
  
    // displaying all elements of sampleSet 
    cout << "sampleSet contains: "; 
    for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) { 
        cout << *itr << " "; 
    } 
  
    // checking if element 20 is present in the set 
    if (sampleSet.count(21) == 1) { 
        cout << "\nElement 20 is present in the set"; 
    } 
    else { 
        cout << "\nElement 20 is not present in the set"; 
    } 

    return 0;
}
