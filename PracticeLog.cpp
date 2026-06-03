#include "PracticeLog.h"
#include<string>
#include<iostream>
using namespace std;

PracticeLog::PracticeLog() {

}

void PracticeLog::addLog() {
	cout << "연습 날짜를 작성하세요 : ";
	cin >> practiceDate;
	cout << endl;
	cout << "연습 시간을 입력하세요(시간 단위 : 분) : ";
	cin >> practiceMin;
	cout << endl;
}

string PracticeLog::getDate() {
	return practiceDate;
}
int PracticeLog::getPracticeMin() {
	return practiceMin;
}

void PracticeLog::setAccumulated(int practiceMin) {
	this->accumulatedMin= this->accumulatedMin + practiceMin;
}

void PracticeLog::showPracticeLog() {
	cout << "=======================================" << endl;
	cout << "오늘 연습 날짜 : " << getDate() << endl;
	cout << "연습 시간 : " << getPracticeMin() <<  "분" << endl;
	cout << "누적 연습 시간 : " << accumulatedMin << "분" << endl;
	cout << "=======================================" << endl;
}
