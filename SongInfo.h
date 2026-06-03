#pragma once
#ifndef SONGINFO_H
#define SONGINFO_H
#include"SongList.h"
#include<string>
using namespace std;

class SongInfo : public SongList {
	int songNum = 0; //보고싶은 곡의 번호
public:
	SongInfo();
	void setSongNum(); // 보고싶은 곡의 번호를 입력 받기 위함
	inline void setSongNum(int songNum) { this->songNum = songNum; } // 곡 번호를 직접 인자로 설정하는 오버로딩 함수 (인라인으로 처리)
	int getSongNum(); //보고싶은 곡의 번호를 getter로 받는다
	SongInfo(string title) : SongList(title) {} // SongList의 생성자를 호출하여 제목(title)을 초기화하는 생성자
	void showInfo(int num); // 곡과 관련된 정보 보여주기
};

#endif // !SONGINFO_H
