/**
  ******************************************************************************
  * @file           : nested-enum1.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-20
  ******************************************************************************
  */
#include <iostream>

enum DataType
{
	TYPE8U,
	TYPE8S,
	TYPE32F,
	TYPE64F
};
class Mat
{
 private:
	DataType type;
	void * data;
 public:
	Mat(DataType type) : type(type), data(NULL){}
	DataType getType() const { return type; }
};

int main()
{
	Mat image(TYPE64F);

	if (image.getType() == TYPE64F)
		std::cout << "This is a 64F matrix." << std::endl;
	else
		std::cout << "This is not a 64F matrix." << std::endl;

	return 0;
}