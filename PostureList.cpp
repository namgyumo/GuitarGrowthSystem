#include "PostureList.h"
#include <string>
#include<iostream>
using namespace std;

PostureList :: PostureList() {

}

string PostureList::getSkillName() {
	return skillName;
}

PostureList::PostureList(string skillName) {
	this->skillName = skillName;
}

PostureList PostureList::low[2]{
	PostureList("헤머링 온"),
	PostureList("풀링 오프")
};

PostureList PostureList::normal[3]{
	PostureList("슬라이드"),
	PostureList("코타시브"),
	PostureList("라스게아도")
};

PostureList PostureList::high[2]{
	PostureList("인공 하모닉스"),
	PostureList("퍼커시브")
};

void PostureList::showPostureList() {
	cout << "=======================================" << endl;
	for (int i = 0; i < 2; i++) {
		cout << i + 1 << "." << low[i].getSkillName() << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << i + 3 << "." << normal[i].getSkillName() << endl;
	}
	for (int i = 0; i < 2; i++) {
		cout << i + 6 << "." << high[i].getSkillName() << endl;
	}
	cout << "=======================================" << endl;
}