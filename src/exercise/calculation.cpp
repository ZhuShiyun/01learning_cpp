/**
  ******************************************************************************
  * @file           : calculation.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-26
  ******************************************************************************
  */
/*
 * 计算机安全专家正在开发一款高度安全的加密通信软件，需要在进行数据传输时对数据进行加密和解密操作。
 * 假定 dataA 和 dataB 分别为随机抽样的两次通信的数据量：

    正数为发送量
    负数为接受量
    0 为数据遗失

请不使用四则运算符的情况下实现一个函数计算两次通信的数据量之和（三种情况均需被统计），以确保在数据传输过程中的高安全性和保密性。
 */
class Solution {
 public:
	int encryptionCalculate(int dataA, int dataB) {
	int sum = 0;
	int carry = 0;
		while (dataB != 0){
			sum = dataA ^ dataB;
			carry = (dataA & dataB) << 1;
			dataA = sum;
			dataB = carry;
		}
		return dataA;
	}
};