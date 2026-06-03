#pragma once
#ifndef COMPLETIONRECORD_H
#define COMPLETIONRECORD_H
#include<iostream>
#include<string>
using namespace std;

class CompletionRecord {
	string CompletionDate = "완곡하지 않음"; //완료한 날짜
	int daysSpent = 0; //완곡까지 소비된 날짜

public:
	CompletionRecord();
	static int dateCount; //몇 번째 곡의 날짜를 저장하는지
	static CompletionRecord allDate[10]; //각각의 곡에 대해 완곡 기록을 담는다
	void inputDate(); //완곡한 날짜 소비된 날짜를 입려 받는다
	string getDate(); // getter를 이용해서 완료한 날짜 받기
	int getDaysSpent(); // getter를 완곡까지 걸린 날짜
	void showRecord(); // 입력한 기록들을 출력할때 보여준다
};

#endif // !COMPLETIONRECORD_H

