/**
  ******************************************************************************
  * @file           : property_tree01.cpp
  * @author         : b-zhushiyun
  * @brief          : ptree xml解析
  * @attention      : None
  * @date           : 23-12-8
  ******************************************************************************
  */
#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

int main() {
	std::string config_file = "conf.xml";
	// Create empty property tree object
	try
	{
		boost::property_tree::ptree pt;
		// Load XML file and put its contects in property tree
		boost::property_tree::read_xml(config_file, pt);
		// Read values
		double offset_dist_l = pt.get<double>("config.offset_dist_l");
		double offset_dist_c = pt.get<double>("config.offset_dist_c");
		double offset_dist_r = pt.get<double>("config.offset_dist_r");
		// Print values
		std::cout << "offset_dist_l = " << offset_dist_l << std::endl;
		std::cout << "offset_dist_c = " << offset_dist_c << std::endl;
		std::cout << "offset_dist_r = " << offset_dist_r << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}

