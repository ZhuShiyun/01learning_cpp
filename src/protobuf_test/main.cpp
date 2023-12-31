#include <iostream>
#include <fstream>
#include "addressbook.pb.h"

using namespace std;

int main(int argc, char** argv)
{
	IM::Account account1;
	account1.set_id(1);
	account1.set_name("windsun");
	account1.set_password("123456");

	string serializeToStr;
	account1.SerializeToString(&serializeToStr);
	cout <<"序列化后的字节："<< serializeToStr << endl;


	IM::Account account2;
	if(!account2.ParseFromString(serializeToStr))
	{
		cerr << "failed to parse student." << endl;
		return -1;
	}
	cout << "反序列化：" << endl;
	cout << account2.id() << endl;
	cout << account2.name() << endl;
	cout << account2.password() << endl;

	google::protobuf::ShutdownProtobufLibrary();

	return 0;
}
