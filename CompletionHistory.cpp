#include "CompletionHistory.h"
#include<string>
#include<iostream>

using namespace std;

void CompletionHistory::inputNum() {
	cout << "보고싶은 곡의 정보를 입력하세요" << endl;
	cin >> selectNum;
}

int CompletionHistory::getNum() {
	return selectNum;
}

void CompletionHistory::showCompletionInfo() {
	
	if (selectNum < 0 || selectNum > dateCount) {
		cout << "해당곡의 완곡 기록이 존재하지 않습니다" << endl;
		return;
	}
	cout << "완곡 날짜 : " << allDate[selectNum].getDate() << endl;
	cout << "소비 날짜 : " << allDate[selectNum].getDaysSpent() << endl;
	record.showInfo(selectNum);

}