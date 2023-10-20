/**
  ******************************************************************************
  * @file           : nested-enum2.cpp
  * @author         : b-zhushiyun
  * @brief          : Add the enum into class in order to let other programmers know DataType is just created for Mat.
  * @attention      :
  * @date           : 23-10-20
  ******************************************************************************
  */

#include <iostream>

class Mat
{
 public:
	enum DataType
	{
		TYPE8U,
		TYPE8S,
		TYPE32F,
		TYPE64F
	};
 private:
	DataType type;
	void * data;
 public:
	Mat(DataType type) : type(type), data(NULL){}
	DataType getType() const { return type; }
};

int main()
{
	Mat image(Mat::DataType::TYPE64F);

	if (image.getType() == Mat::DataType::TYPE64F)
		std::cout << "This is a 64F matrix." << std::endl;
	else
		std::cout << "This is not a 64F matrix." << std::endl;

	return 0;
}