#include "SelfEvaluation.h"
#include <iostream>
#include <string>
using namespace std;
int SelfEvalution::evalCount = 0;
SelfEvalution SelfEvalution::allEvalution[10];

SelfEvalution::SelfEvalution()  {
	
}

void SelfEvalution::inputEvalution() {
	cout << "=======================================" << endl;
	cout << "정확도 점수를 입력하세요: ";
	cin >> accuracy;
	cout << "감정 점수를 입력하세요: ";
	cin >> emotion;
	cout << "리듬 점수를 입력하세요: ";
	cin >> rhythm;
	cout << "=======================================" << endl;
}

int SelfEvalution::getAccuracy() { 
	return accuracy; 
}
int SelfEvalution::getEmotion() {
	return emotion; 
}
int SelfEvalution::getRhythm() {
	return rhythm; 
}


int SelfEvalution::getAverage() {
	int sum = accuracy + emotion + rhythm;
	int avg = sum / 3;
	return avg;
}

void SelfEvalution::printScore() {
	cout << "=======================================" << endl;
	cout << "정확도 점수 : " << accuracy << endl;
	cout << "감정 점수 : " << emotion << endl;
	cout << "리듬 점수 : " << rhythm << endl;
	cout << "평균 점수 : " << getAverage()  << endl;
	cout << "=======================================" << endl;
	allEvalution[evalCount] = *this;
	evalCount++;
}

int SelfEvalution::allAverage() {
	int total = 0;
	for (int i = 0; i < evalCount; i++) {
		total += allEvalution[i].getAverage();
	}
	return total/evalCount;
}
