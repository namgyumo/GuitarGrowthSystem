#pragma once
#ifndef COMPLETIONHISTORY_H
#define COMPLETIONHISTORY_H
#include "CompletionRecord.h"
#include "SongInfo.h"

class CompletionHistory : public CompletionRecord {
	int selectNum;// 완곡한 곡의 번호 입력
public:

	void inputNum(); //완곡한 곡의 정보 입력
	int getNum(); //보고싶은 곡의 번호를 getter로 받는다
	SongInfo record; //SongInfo의 정보를 가져와서 출력
	void showCompletionInfo(); //완곡한 곡의 정보를 출력

};

#endif // !COMPLETIONHISTORY_H
