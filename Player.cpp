#include "Player.h"
#include<iostream>
using namespace std;

Player::Player() {
	this->playerLevel = 0;
}

void Player :: showPlayer() {
	cout << "=======================================" << endl;
	cout << "연주자 이름 : " << name << endl;
	cout << "연주자 레벨 : " << playerLevel << endl;
	cout << "=======================================" << endl;
}

void Player::inputPlayer() {
	cout << "연주자 이름을 입력하세요 : ";
	cin >> name;
}

int Player::getPlayerLevel() {
	return playerLevel;
}

string Player::getName() {
	return name;
}
