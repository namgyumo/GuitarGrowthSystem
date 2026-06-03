#pragma once
#ifndef SELFVALUATION_H
#define SELFVALUATION_H
#include<string>
class SelfEvalution {
	int accuracy = 0; //정확도 점수 입력
	int emotion = 0; //감정 점수 입력
	int rhythm = 0; //리듬 점수 입력

public:
	int getAccuracy(); //getter로 정확도 점수를 받는다
	int getEmotion();  //getter로 감정 점수를 받는다
	int getRhythm();  //getter로 리듬 점수를 받는다
	SelfEvalution(); //기본생성자로 this를 이용해서 모두 0으로 초기화
	void inputEvalution(); //정확도 감정 리듬 점수를 입력받는다
	static SelfEvalution allEvalution[10]; //각각의 곡에 대한 평균 점수들
	static int evalCount; // 몇 번째 곡까지 평가했는지 추적
	int getAverage(); //정확도 감정 리듬 점수 평균 점수 계산
	void printScore(); //각각의 정확도 감정 리듬 전체 총 평균 점수를 출력
	int allAverage(); //전체 완곡된 평균 점수
};
#endif // !SELFVALUATION_H

