#pragma once
#ifndef POSTURE_H
#define POSTURE_H
#include<string>
class PostureTip {
	string skillName; // 기타 기술 이름
	
public:
	string getName(); // 기타기술 이름 get으로 받는다
	void description(); // 기타 기술에 대한 설명을 void로 출력
	void tip(); // 기타 기술에 대한 팁을 void로 출력
};

#endif // !POSTURE_H

