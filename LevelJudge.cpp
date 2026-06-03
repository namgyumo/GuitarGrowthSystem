#include "LevelJudge.h"
#include <iostream>
#include <string>
using namespace std;

LevelJudge::LevelJudge() {

}

void LevelJudge::inputCompletedCount() {
	cout << "완곡한 곡의 개수를 입력하세요" << endl;
	cin >> completedCount;
}

int LevelJudge::getcomCount() {
	return completedCount;
}

void LevelJudge::currentLevel(){ 
	completedCount = getcomCount();
	switch (completedCount) {
	case 1:
		playerLevel = 1;
		LevelingMsg();
		break;
	case 2:
		playerLevel = 1;
		LevelingMsg();
		break;
	case 3:
		playerLevel = 2;
		LevelingMsg();
		break;
	case 4:
		playerLevel = 2;
		LevelingMsg();
		break;
	case 5:
		playerLevel = 3;
		LevelingMsg();
		break;
	case 6:
		playerLevel = 3;
		LevelingMsg();
		break;
	case 7:
		playerLevel = 4;
		LevelingMsg();
		break;
	case 8:
		playerLevel = 4;
		LevelingMsg();
		break;
	case 9:
		playerLevel = 5;
		LevelingMsg();
		break;
	case 10:
		playerLevel = 5;
		LevelingMsg();
		break;
	default:
		break;
	}
}

void LevelJudge::LevelingMsg() {
	cout << "현재 레벨 : " << playerLevel << endl;
}

void LevelJudge::printLevel() {
	if (playerLevel >= 9) {
		cout << "이제 당신은 다른사람을 직접 가르칠수 있는 능력자 입니다" << endl;
	}
	else if (playerLevel >= 7) {
		cout << "이제 다른 사람들 앞에서 먼저 기타를 쳐서 장기를 뿜내셔도 됩니다" << endl;
	}
	else if (playerLevel >= 5) {
		cout << "이제 어디가서 기타 조금 칠수 있다고 얘기 할수 있습니다" << endl;
	}
	else if (playerLevel >= 3) {
		cout << "이제 어디가서 기타 좀 배운다고 말씀하실수 있습니다" << endl;
	}
	else {
		cout << "아직은 기타 입문자 입니다 더 열심히 배우세요," << endl;
	}
}
