#pragma once
#ifndef SONG_H
#define SONG_H
#include <string>
#include<iostream>
#include"PostureTip.h"
using namespace std;

class SongList {
	string title; // 곡 제목
	string composer; // 곡 작곡가
	string difficulty; // 곡 난이도(*로 표시)
	PostureTip requiredSkills[]; // 곡에 필요한 스킬들
	static int totalCount; //전체 곡 개수가 몇개인지 세는것
public:
	static SongList songs[];// 곡을 모두 정의
	static SongList getSong(int index); 
	static int getTotalCount(); //곡 개수
	void printInfo(); //곡에 필요한 정보
};

#endif // !SONG_H

