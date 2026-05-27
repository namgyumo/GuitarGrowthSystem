#pragma once
#ifndef PRACTICELOG_H
#define PRACTICELOG_H
#include <string>
class PracticeLog {
	string date; // 연습날짜 적기
	int duration; // 몇일째 연습중인지 직접입력
	int accumulatedMin; // 오늘 몇분을 입력했는지
public:
	void addLog(); //연습일지 적기
	int getAccumulated(); //현재 총 몇분째 연습중인지 누적 계산 후 반환
	string getDate(); //현재 날짜 getter로 반환
};
#endif // !PRACTICELOG_H

