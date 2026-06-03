#pragma once
#ifndef PRACTICELOG_H
#define PRACTICELOG_H
#include <iostream>
#include <string>
using namespace std;

class PracticeLog {
	string practiceDate; // 연습날짜 적기
	int practiceMin = 0; // 오늘 몇분을 연습했는지
	int accumulatedMin = 0; // 총 몇분을 연습했는지
public:
	PracticeLog();
	void addLog(); //연습일지 적기
	int getPracticeMin(); //오늘 몇분을 연습했는지
	void setAccumulated(int practiceMin); //현재 총 몇분째 연습중인지 누적 계산 후 반환
	string getDate(); //현재 날짜 getter로 반환
	void showPracticeLog(); //연습 일지 보여주기
};
#endif // !PRACTICELOG_H

