#pragma once
#ifndef NEXTSONGGUIDE_H
#define NEXTSONGGUIDE_H
#include <string>
#include"SongList.h"
using namespace std;

class NextSongGuide { //다음으로 진행해야 할 곡이 뭔지 알아야함
	string targetDate; //완곡하고싶은 목표 날짜 설정
	SongList nextSong; //다음으로 진행해야 하는 곡
public:
	void guide(); // 곡을 칠때 필요한 정보를 출력
	SongList getNextSong(); // 다음으로 진행해야할 곡이 뭔지 getter로 받는다

};

#endif // !NEXTSONGGUIDE_H

