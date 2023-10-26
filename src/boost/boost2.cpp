/**
  ******************************************************************************
  * @file           : boost2.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-10-24
  ******************************************************************************
  */#include <iostream>
#include <boost/filesystem.hpp>

using namespace boost::filesystem;

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "用法：app path\n";
		return 1;
	}
	std::cout << argv[1] << ":" << file_size(argv[1]) << std::endl;
	return 0;
}

// 编译命令：g++ demo2.cpp -o demo2  -lboost_system -lboost_filesystem


