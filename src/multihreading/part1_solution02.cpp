/**
  ******************************************************************************
  * @file           : part1_solution02.cpp
  * @author         : b-zhushiyun
  * @brief          : Use unique_lock(智能锁) to resolve the conflict
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

void DannyWriteUniquelock(mutex& amutex, string& blackboard){
	unique_lock<std::mutex> lk(amutex);
	DannyWrite(blackboard);
}

void PeterWriteUniquelock(mutex& amutex, string& blackboard){
	unique_lock<std::mutex> lk(amutex);
	PeterWrite(blackboard);
}

void DemoResourceLock(){
	string blackboard;
	mutex amutex;
	thread DannyThread(DannyWriteUniquelock, std::ref(amutex), std::ref(blackboard));
	thread PeterThread(PeterWriteUniquelock,std::ref(amutex), std::ref(blackboard));
	DannyThread.join();
	PeterThread.join();
	cout<<blackboard<<endl;
}

int main(){
	DemoResourceLock();
	return 0;
}
