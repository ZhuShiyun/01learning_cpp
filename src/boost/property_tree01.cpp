/**
  ******************************************************************************
  * @file           : property_tree01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-12-8
  ******************************************************************************
  */
#include <iostream>
#include <map>
#include <string>

class PropertyTree {
 public:
	void set(const std::string& key, const std::string& value) {
		properties[key] = value;
	}

	std::string get(const std::string& key) const {
		auto it = properties.find(key);
		if (it != properties.end()) {
			return it->second;
		}
		return "";
	}

 private:
	std::map<std::string, std::string> properties;
};

int main() {
	PropertyTree tree;
	tree.set("name", "John");
	tree.set("age", "30");
	tree.set("city", "New York");

	std::cout << "Name: " << tree.get("name") << std::endl;
	std::cout << "Age: " << tree.get("age") << std::endl;
	std::cout << "City: " << tree.get("city") << std::endl;

	return 0;
}