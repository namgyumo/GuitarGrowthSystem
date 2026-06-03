#pragma once
#ifndef LEVELJUDGE
#define LEVELJUDGE
#include"Player.h"
#include<string>

class LevelJudge : public Player {
	int completedCount = 0; //완곡한 곡 개수
public:
	LevelJudge(); //기본 생성자로 레벨 판단에서 현재 완곡한 개수를 0으로 준다
	void inputCompletedCount(); //현재 자신이 몇개의 곡을 완곡 했는지 입력
	void printLevel(); //현재 수준이 어느 정도인지 평가
	void currentLevel(); //현재 완곡 개수로 레벨을 준다
	void LevelingMsg(); //레벨 오를때 마다 메세지 출력
	int getcomCount(); //완곡한 곡 개수 입력받은걸 getter로 받는다
};

#endif // !LEVELJUDGE

