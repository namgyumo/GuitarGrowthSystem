#include"SongInfo.h"
#include<string>
#include<iostream>
using namespace std;

SongInfo::SongInfo() {

}

void SongInfo::setSongNum() {
	cout << "보고싶은 곡의 번호를 입력하세요" << endl;
	cin >> songNum;
}

int SongInfo::getSongNum() {
	return songNum;
}

void SongInfo::showInfo(int num) {
	switch (num)
	{
	case 1:
		cout << beginner[0].getTitle() << endl;
		cout << "작곡가 : 이루마" << endl;
		cout << "곡 난이도 : *" << endl;
		break;
	case 2:
		cout << beginner[1].getTitle() << endl;
		cout << "작곡가 : 마사아키 키시베" << endl;
		cout << "곡 난이도 : *" << endl;
		break;
	case 3:
		cout << interMediate[0].getTitle() << endl;
		cout << "작곡가 : 마사아키 키시베" << endl;
		cout << "곡 난이도 : **" << endl;
		break;
	case 4:
		cout << interMediate[1].getTitle() << endl;
		cout << "작곡가 : 코타로 오시오" << endl;
		cout << "곡 난이도 : **" << endl;
		break;
	case 5:
		cout << advanced[0].getTitle() << endl;
		cout << "작곡가 : 코타로 오시오" << endl;
		cout << "곡 난이도 : ***" << endl;
		break;
	case 6:
		cout << advanced[1].getTitle() << endl;
		cout << "작곡가 : 오카자키 린텐" << endl;
		cout << "곡 난이도 : ***" << endl;
		break;
	case 7:
		cout << advanced[2].getTitle() << endl;
		cout << "작곡가 : 오카자키 린텐" << endl;
		cout << "곡 난이도 : ***" << endl;
		break;
	case 8:
		cout << advanced[3].getTitle() << endl;
		cout << "작곡가 : 마사아키 키시베" << endl;
		cout << "곡 난이도 : ***" << endl;
		break;
	case 9:
		cout << expert[0].getTitle() << endl;
		cout << "작곡가 : 코타로 오시오" << endl;
		cout << "곡 난이도 : ****" << endl;
		break;
	case 10:
		cout << expert[1].getTitle() << endl;
		cout << "작곡가 : 코타로 오시오" << endl;
		cout << "곡 난이도 : *****" << endl;
		break;
	default:
		break;
	}
}