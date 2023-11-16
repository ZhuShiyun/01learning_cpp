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

/**
	 * @brief 啊好麻烦我决定封装一下打印操作
	 */
void printVector(string info, vector<int> v)
{
	cout << info;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}


int main()
{

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

	v5.assign(iArray, iArray + 5);
	cout << "v5.size() = " << v5.size() << endl;
	cout << "v5:";
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << " ";
	}
	cout << endl;

	/**
	 * @brief vector.resize(num)
	 * 重新制定容器的长度为num,若容器变长，则以默认值填充新位置。
	 * 如果容器变短，则末尾超出容器长度的元素被删除。
	 */
	v5.resize(10); //容器长度变长，以默认值0填充新位置
	cout << "v5.resize(10):";
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << " ";
	}
	cout << endl;

	v5.resize(3); //容器长度变短，末尾超出容器长度的元素被删除
	cout << "v5.resize(3):";
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << " ";
	}
	cout << endl;

	v5.resize(10, 100); //容器长度变长，以10填充新位置
	cout << "v5.resize(10,100):";
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << " ";
	}
	cout << endl;

	/**
	 * @brief vector末尾的添加移除操作
	 */
	// 引入：存在数组a和vector v6，将数组a中的元素赋值给vector v6
	int a[] = { 1, 2, 3, 4 };
	vector<int> v6(a, a + 4);
	cout << "v6:";
	for (int i = 0; i < v6.size(); i++)
	{
		cout << v6[i] << " ";
	}
	cout << endl;
#if 0
	// Q:使用下标法访问vector容器中的元素,而且下标越界
	v6[7] = 100; // 如果下标越界，会导致程序异常退出（系统：你竟然想干坏事！）

	v6.at(7) = 100; // 这样（起码）就会抛出异常信息
	cout << "如果这一句没被打印，说明程序已经在前面被终止了。" << endl; // 这一句不会被打印
#endif

	//从末尾插入一个元素
	v6.push_back(27);
	cout << "v6.push_back(27):";
	for (int i = 0; i < v6.size(); i++)
	{
		cout << v6[i] << " ";
	}
	cout << endl;

	// 删除末尾的元素
	v6.pop_back();
	cout << "v6.pop_back():";
	for (int i = 0; i < v6.size(); i++)
	{
		cout << v6[i] << " ";
	}
	cout << endl;

	//终于觉得每次都写循环太麻烦所以调用printVector函数
	printVector("v6:", v6);

	/**
	 * @brief vector的插入操作
	 */

	//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
	v6.insert(v6.begin()+3, 100); // 在下标为3的位置插入100,注意第一个参数必须是指针（所以不能直接写3）
	printVector("v6.insert(v6.begin()+3, 100):", v6);

	//在pos位置插入n个elem数据，无返回值。
	v6.insert(v6.begin()+3, 3, 1000); // 在下标为3的位置插入3个1000
	printVector("v6.insert(v6.begin()+3, 3, 1000):", v6);

	//在pos位置插入[beg,end)区间的数据，无返回值。
	int b[] = {90,80,70,60, 50, 40};
	v6.insert(v6.begin()+3, b+1, b+4);
	printVector("v6.insert(v6.begin()+3, b+1, b+4):", v6);

	vector<int> v7(b, b+6);
	v6.insert(v6.begin()+7, v7.begin()+1, v7.begin()+4);
	printVector("v6.insert():", v6);

	return 0;
}
