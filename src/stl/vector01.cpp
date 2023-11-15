/**
  ******************************************************************************
  * @file           : vector01.cpp
  * @author         : b-zhushiyun
  * @brief          : Vector 容器的使用方法
  * @link           : https://cloud.fynote.com/edit?nid=369911&id=1724709117047603200&t=1700037692901
  * @attention      : None
  * @date           : 23-11-15
  ******************************************************************************
  */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
#if 0
	/**
	 * @brief vector的构造函数
	 */
	int iarr[] = { 1, 2, 3, 4, 5 };
	vector<int> v1(iarr,iarr+5);
	vector<int> v2(3, 10); // 存储3个10
	for (int i = 0; i < 3; i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;
	vector<int> v3(v1); // 触发拷贝构造函数
	vector<int> v4 = v1; // 触发拷贝构造函数
	for (int i = 0; i < 5; i++)
	{
		cout << v4[i] << " ";
	}
	cout << endl;

	/**
	 * @brief vector的赋值操作
	 */
	vector<int> vecIntA(3, 7);
	vector<int> vecIntB, vecIntC, vecIntD;
	int iArray[] = { 0, 1, 2, 3, 4 };

	//将数组iArray中的所有元素赋值给vecIntA容器
	vecIntA.assign(iArray, iArray + 5);
	cout << "vecIntA:";
	for (int i = 0; i < vecIntA.size(); i++)
	{
		cout << vecIntA[i] << " ";
	}
	cout << endl;

	//将vecIntA容器中的第2个到第4个元素赋值给vecIntB容器
	vecIntB.assign(vecIntA.begin() + 1, vecIntA.begin() + 4);
	cout << "vecIntB";
	for (int i = 0; i < vecIntB.size(); i++)
	{
		cout << vecIntB[i] << " ";
	}
	cout << endl;

	//将4个10拷贝到vectorIntC容器中
	vecIntC.assign(4, 10);
	cout << "vecIntC:";
	for (int i = 0; i < vecIntC.size(); i++)
	{
		cout << vecIntC[i] << " ";
	}
	cout << endl;

	//swap
	vecIntB.swap(vecIntC);
	cout << "vecIntB(swap):";
	for (int i = 0; i < vecIntB.size(); i++)
	{
		cout << vecIntB[i] << " ";
	}
	cout << endl;

	cout << "vecIntC(swap):";
	for (int i = 0; i < vecIntC.size(); i++)
	{
		cout << vecIntC[i] << " ";
	}
	cout << endl;

	vecIntD = vecIntC;
	cout << "vecIntD:";
	for (int i = 0; i < vecIntD.size(); i++)
	{
		cout << vecIntD[i] << " ";
	}
	cout << endl;

#endif
	/**
	 * @brief vector的大小
	 */

	// empty
	vector<int> v5;
	cout << "v5.size() = " << v5.size() << endl;
	if (v5.empty()) // 判断容器是否为空
	{
		cout << "v5 is empty" << endl;
	}

	int iArray[] = {0, 1, 2, 3, 4};
	v5.assign(iArray, iArray + 5);
	cout << "v5.size() = " << v5.size() << endl;
	cout << "v5:";
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << " ";
	}

	/**
	 * @brief vector.resize(num)
	 * 重新制定容器的长度为num,若容器变长，则以默认值填充新位置。
	 * 如果容器变短，则末尾超出容器长度的元素被删除。
	 */

	return 0;
}
