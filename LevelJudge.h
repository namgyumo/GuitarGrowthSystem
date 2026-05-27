#pragma once
#ifndef LEVELJUDGE
#define LEVELJUDGE
#include<string>

class levelJudge {
	int completedCount; //완곡한 곡 개수
	int currentLevel; //현재 레벨
public:
	string getLevelingMsg(); //레벨 오를때 마다 메세지 출력
	static int calcLevel(); //완곡한 개수를 기준으로 레벨 계산
};

#endif // !LEVELJUDGE

