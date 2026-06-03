#pragma once
#ifndef POSTURE_H
#define POSTURE_H
#include<string>
using namespace std;

class PostureList {
	string skillName = ""; // 기타 기술 이름
public:
	PostureList();
	PostureList(string title); //this를 이용해서 기타 기술이름을 받는다
	static PostureList low[2];// 기타 기술 배열로 정의
	static PostureList normal[3];// 기타 기술 배열로 정의
	static PostureList high[2];// 기타 기술 배열로 정의
	void showPostureList(); //기타 기술 보여주기
	string getSkillName(); //getter를 활용해서 기술 이름을 받는다
};

#endif // !POSTURE_H

