#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include<iostream>
using namespace std;

class Player {
protected:
	string name; //연주자 이름
	int playerLevel = 0; //연주자 레벨
	
public:
	Player(); //여기서 플레이어의 레벨을 기본으로 0으로 준다
	void inputPlayer(); //플레이어의 이름을 입력받는다
	void showPlayer(); //플레이어의 정보를 출력한다
	string getName(); //getter로 플레이어 이름을 받아온다
	int getPlayerLevel(); //getter로 플레이어의 레벨을 받아온다

};

#endif // !PLAYER_H

