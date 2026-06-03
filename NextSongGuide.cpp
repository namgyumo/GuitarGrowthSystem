#include "NextSongGuide.h"
#include<iostream>
#include <string>
using namespace std;

NextSongGuide::NextSongGuide() {

}

void NextSongGuide::guide() {
	allSongNum = allSongNum + 1;
	if (allSongNum <= 2) {
		cout << "<입문>" << endl;
	}
	if (allSongNum <= 4) {
		cout << "<초급>" << endl;
	}
	if (allSongNum <= 8) {
		cout << "<중급>" << endl;
	}
	else {
		cout << "<고급>" << endl;
	}

	cout << "다음 곡 : " << getNextSong().getTitle() << endl;
	cout << "곡 정보 " << endl;
	setSettingNum(allSongNum);
	
}

SongList NextSongGuide::getNextSong() {
	if (allSongNum <= 2) {
		return nextSong.beginner[allSongNum - 1];
	}
	else if (allSongNum <= 4) {
		return nextSong.interMediate[allSongNum - 3];
	}
	else if (allSongNum <= 8) {
		return nextSong.advanced[allSongNum - 5];
	}
	else{
		return nextSong.expert[allSongNum - 9];
	}
}

void NextSongGuide::setSettingNum(int allSongNum) {
	songInfo.setSongNum(allSongNum);
	songInfo.showInfo(allSongNum);
}


