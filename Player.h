#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include<string>

class Player {
	string name; //연주자 이름
	int level; //시작할 때 연주자 레벨
	int currentSongIndex; //현재 연주자 레벨
public:
	Player(string name, int level); //연주자 생성
	void levelUp(); //현재 레벨이 어떠한지 출력
	string getName(); //getter을 이용해서 name을 받는다.
};

#endif // !PLAYER_H

