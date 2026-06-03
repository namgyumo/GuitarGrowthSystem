#pragma once
#ifndef NEXTSONGGUIDE_H
#define NEXTSONGGUIDE_H
#include <string>
#include"SongList.h"
#include"SongInfo.h"
using namespace std;

class NextSongGuide{ //다음으로 진행해야 할 곡이 뭔지 알아야함
	string targetDate; //완곡하고싶은 목표 날짜 설정
	SongList nextSong; //다음으로 진행해야 하는 곡
	SongInfo songInfo; //곡 번호에 따른 상세 정보 출력에 사용되는 객체
	int allSongNum = 0; //다음곡으로 넘어갈때 마다 +1 그리고 전체 몇곡 완곡했는지 체크 용도
public:	
	NextSongGuide();
	void guide(); // 곡을 칠때 필요한 정보를 출력
	SongList getNextSong(); // 다음으로 진행해야할 곡이 뭔지 getter로 받는다
	void setSettingNum(int allSongNum); // 여기에 있는 번호를 기준으로 SongInfo에서 switch가 번호를 판단해서 곡 정보 출력
};

#endif // !NEXTSONGGUIDE_H

