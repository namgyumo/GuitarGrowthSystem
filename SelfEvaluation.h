#pragma once
#ifndef SELFVALUATION_H
#define SELFVALUATION_H
#include<string>
class SelfEvalution {
	int accuracy; //정확도 점수 입력
	int emotion; //감정 점수 입력
	int rhythm; //리듬 점수 입력
	int averageScore; //전체 평균 점수
public:
	int calcAverage(); //정확도 감정 리듬 점수 평균 점수 계산
	int getAverage(); //getter을 이용해서 평균값을 받는다
	void printScore(); //각각의 정확도 감정 리듬 전체 총 평균 점수를 출력
};
#endif // !SELFVALUATION_H

