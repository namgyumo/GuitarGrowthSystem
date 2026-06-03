#pragma once
#ifndef SONGLISTH_H
#define SONGLISTH_H
#include <string>
#include<iostream>
using namespace std;

class SongList{
	string title = ""; // 곡 제목
public:
	SongList();
	SongList(string title); //this를 이용해서 자기자신의 값을 받는다
	static SongList beginner[2];// 입문곡을 모두 정의
	static SongList interMediate[2];// 초급곡을 모두 정의
	static SongList advanced[4];// 중급곡을 모두 정의
	static SongList expert[2];// 고급곡을 모두 정의
	void showSongList(); //곡 보여주기
	string getTitle(); //getter로 곡의 이름을 받는다
};

#endif // !SONG_H

