#pragma once
#ifndef PROGRESSSTATS_H
#define PROGRESSSTATS_H
#include "SelfEvaluation.h"
class ProgressStats : public SelfEvalution {
	int completedCounted; //완곡한 곡의 개수
	int duration; // 몇일째 연습중인지 직접입력
public:
	double calcProgress(); //전체 몇퍼센트 정도 진행되었는지 계산
	void printStats(); //진행률 통계 출력
	
};

#endif // !PROGRESSSTATS_H

