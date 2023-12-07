/**
  ******************************************************************************
  * @file           : test01.cpp
  * @author         : b-zhushiyun
  * @brief          : 二维数组转制
  * @attention      : None
  * @date           : 23-12-7
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int main()
{
	int row, column;
	cout << "Input row and column:";
	cin >> row;
	cin >> column;
	cout << "Input elements in the matrix:" << endl;
	int mat[row][column];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> mat[i][j];
		}
	}

	int mat2[column][row];
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			mat2[i][j] = mat[j][i];
		}
	}

	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << mat2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}