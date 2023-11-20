/**
  ******************************************************************************
  * @file           : part1_solution01.cpp
  * @author         : b-zhushiyun
  * @brief          : Use lock and unlock to resolve the conflict
  * @attention      : None
  * @date           : 23-11-20
  ******************************************************************************
  */
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

void DannyWrite(string& blackboard)
{
	blackboard+="My";
	this_thread::sleep_for(std::chrono::milliseconds(rand()%3));
	blackboard+= " name";
	this_thread::sleep_for(std::chrono::milliseconds(rand()%3));
	blackboard+=" is";
	this_thread::sleep_for(std::chrono::milliseconds(rand()%3));
	blackboard+= " Danny\n";
}

void PeterWrite(string& blackboard)
{
	blackboard+="My";
	this_thread::sleep_for(std::chrono::milliseconds(rand()%3));
	blackboard+= " name";
	this_thread::sleep_for(std::chrono::milliseconds(rand()%3));
	blackboard+=" is";
	this_thread::sleep_for(std::chrono::milliseconds(rand()%3));
	blackboard+= " Peter\n";
}
//在执行的函数前后添加了lock()和unlock()函数
void DannyWritelock(mutex& amutex, string& blackboard){
	amutex.lock();
	DannyWrite(blackboard);
	amutex.unlock();
}

void PeterWritelock(mutex& amutex, string& blackboard){
	amutex.lock();
	PeterWrite(blackboard);
	amutex.unlock();
}

void DemoResourceLock(){

	string blackboard;
	//两个函数公用一个mutex
	mutex amutex;
	thread DannyThread(DannyWritelock, std::ref(amutex), std::ref(blackboard));
	thread PeterThread(PeterWritelock,std::ref(amutex), std::ref(blackboard));
	DannyThread.join();
	PeterThread.join();
	cout<<blackboard<<endl;
}

int main(){
	DemoResourceLock();
	return 0;
}
