#include "CompletionRecord.h"
#include<iostream>
#include<string>
using namespace std;

CompletionRecord CompletionRecord::allDate[10];
int CompletionRecord::dateCount = 0;

CompletionRecord :: CompletionRecord() {

}

void CompletionRecord::inputDate() {
	cout << "완곡한 날짜를 입력하세요" << endl;
	cin >> CompletionDate;
	cout << "총 몇일이 걸렸는지 입력하세요" << endl;
	cin >> daysSpent;
}

string CompletionRecord::getDate() {
	return CompletionDate;
}

int CompletionRecord::getDaysSpent() {
	return daysSpent;
}


void CompletionRecord::showRecord() {
	cout << "완곡 날짜 : " << getDate() << endl;
	cout << "소요 일수 : " << getDaysSpent() << endl;
	allDate[dateCount] = *this;
	dateCount++;
}