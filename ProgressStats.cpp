#include "ProgressStats.h"
#include <iostream>
#include <string>
using namespace std;

void ProgressStats::printStats() {
	
	cout << "현재 " << duration << "일째 연습중" << endl;
	cout << "전체 10곡 중에서 " << evalCount << "곡을 완곡하였습니다" << endl;
	cout << "현재 완곡한 자기평가 점수의 평균은 " << allAverage() << endl;

}

double ProgressStats::calcProgress() {
	double avg;
	avg = (double)(10 / evalCount);
	return avg;
}






