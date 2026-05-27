#pragma once
#ifndef PROGRESSSTATS_H
#define PROGRESSSTATS_H
class ProgressStats {
	int completedCounted; //완곡한 곡의 개수
public:
	double calcProgress(); //전체 몇퍼센트 정도 진행되었는지 계싼
	void printStats(); //진행률 통계 출력
};

#endif // !PROGRESSSTATS_H

