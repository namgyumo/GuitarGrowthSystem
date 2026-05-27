#pragma once
#ifndef COMPLETIONHISTORY_H
#define COMPLETIONHISTORY_H
#include"CompletionRecord.h"
using namespace std;
class CompletionHistory {
	CompletionHistory* record; //동적할당을 이용하여 CompletionRecord 의 기록을 받음
	int totalCount; //곡의 전체 개수

public:
	void addRecord();//기록을 추가하는 것
	CompletionRecord* findByIndex(); //특정 인덱스 번호를 찾는것, 그 번호를 기준으로 완곡 되었는지 아닌지 찾기
	void printHistory(); // 찾은 인덱스 번호를 기준으로 곡의 완곡 기록 출력

};
#endif // !COMPLETIONHISTORY_H

