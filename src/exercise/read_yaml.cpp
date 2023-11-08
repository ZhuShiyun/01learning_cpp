/**
  ******************************************************************************
  * @file           : read_yaml.cpp
  * @author         : b-zhushiyun
  * @brief          : 读取yaml文件
  * @attention      : None
  * @date           : 23-11-8
  ******************************************************************************
  */// main.cpp
#include <yaml-cpp/yaml.h> //yaml-cpp 头文件
#include <iostream>

// read config
const std::string DB_CONF = "config.yaml";

int main(int argc, char** argv) {
	/*----------------------------------- test yaml-cpp ----------------------------------------*/
	std::cout << "This code is for test yaml" << std::endl;

	/* Node conf. */
	YAML::Node conf = YAML::LoadFile(DB_CONF);

	/*----------------------------------- display db_config ----------------------------------------*/
	std::cout << "Database:"<< std::endl;
	std::cout << "domain:  " << conf["custom_db"]["db_domain"].as<std::string>() << std::endl;
	std::cout << "username:" << conf["custom_db"]["db_username"].as<std::string>() << std::endl;
	std::cout << "passwd:  " << conf["custom_db"]["db_passwd"].as<std::string>() << std::endl;
	std::cout << "schema:  " << conf["custom_db"]["db_schema"].as<std::string>() << std::endl;

	/*----------------------------------- display redis ----------------------------------------*/
	std::cout << "Redis" << std::endl;
	std::cout << "redis_domain: " << conf["redis"]["redis_domain"].as<std::string>() << std::endl;
	std::cout << "redis_passwd: " << conf["redis"]["redis_passwd"].as<std::string>() << std::endl;

	/*----------------------------------- display hello ----------------------------------------*/
	/* vector of name string. */
	std::vector<std::string> name_vec = conf["hello"]["num_config"].as<std::vector<std::string> >();
	if(!name_vec.empty())
		std::cout << name_vec[0] << std::endl;
	std::vector<std::string> name_vec2 = conf["hello"]["name_config"].as<std::vector<std::string> >();
	if(!name_vec2.empty())
	{
		for (int i = 0; i < name_vec2.size(); i++)
		{
			std::cout << name_vec2[i] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}


