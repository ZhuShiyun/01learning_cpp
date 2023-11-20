/**
  ******************************************************************************
  * @file           : part1_problem.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-11-20
  ******************************************************************************
  */
#include <iostream>
#include <thread>
#include <queue>
#include <mutex>

using namespace std;

void DannyWrite(string &blackboard)
{
	blackboard+="My";
	//this_thread::sleep_for() 使当前线程暂停执行一段时间。
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
void DemoResouceConflict()
{
	string blackboard;
	//thread中传引用时，需要使用std::ref()修饰变量
	thread DannyThread(DannyWrite, std::ref(blackboard));
	thread PeterThread(PeterWrite,std::ref(blackboard));
	DannyThread.join();
	PeterThread.join();
	cout<<blackboard<<endl;
}


int main(){
	DemoResouceConflict();
	return 0;
}
// Compare this snippet from src/multihreading/threadSamples-part2.cpp: