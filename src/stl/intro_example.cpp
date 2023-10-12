/**
  ******************************************************************************
  * @file           : intro_example.cpp
  * @author         : b-zhushiyun
  * @brief          : 输入数字，直到输入一个<= 0 的数字， 将得到最大最小值及排列 https://cui-jiacai.gitbook.io/c++-stl-tutorial/
  * @attention      : None
  * @date           : 23-10-12
  ******************************************************************************
  */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void display(int x) { cout << " " << x; } // 修改了源代码中的' '使编译通过
int main()
{
    vector<int> v; //创建容器对象v，元素类型为int
    int x;
    cout << "Input a number(End of entering any number <=0):" ;
    cin >> x;
    while (x > 0) //生成容器v中的元素
    {
        v.push_back(x); //往容器v中增加一个元素
        cout << "Input a number(End of entering any number <=0):" ;
        cin >> x;
    }
    //利用算法max_element计算并输出容器v中的最大元素
    cout << "Max = " << *max_element(v.begin(),v.end()) << endl;
    //利用算法accumulate计算并输出容器v中所有元素的和
    cout << "Sum = " << accumulate(v.begin(),v.end(),0) << endl;
    //利用算法sort对容器v中的元素进行排序
    sort(v.begin(),v.end());
    //利用算法for_each输出排序结果
    cout << "Sorted result is:\n";
    for_each(v.begin(),v.end(),display);
    cout << '\n';
    return 0;
}