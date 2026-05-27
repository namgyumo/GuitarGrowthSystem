#pragma once
#ifndef COMPLETIONRECORD_H
#define COMPLETIONRECORD_H
#include<string>

class CompletionRecord {
	string CompletionDate; //완료한 날짜
	int daysSpent; //완곡까지 소비된 날짜
	string songTitle(); //완곡한 곡
public:
	string getDate(); // getter를 이용해서 완료한 날짜 받기
	int getDaysSpent(); // getter를 완곡까지 걸린 날짜
	string getSongTitle(); // getter를 활용하여 곡 정보 반환
};

#endif // !COMPLETIONRECORD_H

