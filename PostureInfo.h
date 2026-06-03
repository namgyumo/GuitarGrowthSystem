#pragma once
#ifndef POSTUREINFO_H
#define POSTUREINFO_H
#include "PostureList.h"

class PostureInfo : public PostureList {
	int PostureNum = 0; //보고싶은 기타 기술 번호
	
public:
	PostureInfo();
	PostureInfo(string skillName) : PostureList(skillName) {} //PostureList의 생성자를 호출하여 기술 이름(skillName)을 초기화하는 생성자
	void showPostureInfo(); // 기타 기술과 관련된 정보 보여주기
	void inputPostureNum(); //보고싶은 기타기술 정보 출력
	int getPostureNum(); //입력받은 기타기술 getter로 반환
};

#endif // !POSTUREINFO_H

