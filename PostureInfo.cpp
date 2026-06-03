#include "PostureInfo.h"
#include<string>
#include<iostream>
using namespace std;

PostureInfo::PostureInfo() {

}

void PostureInfo::inputPostureNum() {
	cout << "보고싶은 기술의 번호를 입력하세요" << endl;
	cin >> PostureNum;
}

int PostureInfo::getPostureNum() {
	return PostureNum;
}


void PostureInfo::showPostureInfo() {
	
	switch (getPostureNum())
	{
	case 1:
		cout << low[0].getSkillName() << endl;
		cout << "의미 : 음을 피킹한 후, 왼손 손가락으로 다음 프렛의 음을 때리듯이 눌러 소리를 낸다" << endl;
		cout << "Tip : 손가락을 눕히지 말고 세워서 망치처럼 줄을 수직으로 강하게 내리쳐야 합니다. 이때 다른 줄을 건드리지 않도록 주의하세요." << endl;
		cout << "기술 난이도 : " << "*" << endl;
		break;
	case 2:
		cout << low[1].getSkillName() << endl;
		cout << "의미 : 음을 피킹한 후 왼손으로 누르고 있던 프렛을 튕기듯이 떼어내며 다음 프렛의 음을 연주한다" << endl;
		cout << "Tip : 줄을 뜯기 전에, 다음에 소리 내야 할 낮은 음의 프렛을 왼손 다른 손가락으로 미리 누르고 있어야 합니다." << endl;
		cout << "기술난이도 : " << "*" << endl;
		break;
	case 3:
		cout << normal[0].getSkillName() << endl;
		cout << "의미 : 음을 피킹한 후 왼손으로 누르고 있던 프렛을 미끄러지듯이 다음 음으로 이동한다" << endl;
		cout << "Tip : 손가락을 보지 말고, 도착할 목표 프렛을 미리 눈으로 보면 정확한 위치에 딱 멈추기 훨씬 수월합니다." << endl;
		cout << "기술난이도 : " << "**" << endl;
		break;
	case 4:
		cout << normal[1].getSkillName() << endl;
		cout << "의미 : 일본의 유명 핑거스타일 기타리스트 '코타로 오시오'의 이름과, 줄을 때린다는 뜻의 '퍼커시브'가 합쳐진 신조어" << endl;
		cout << "Tip : 줄을 긁으며 내리는 스트로크이기 때문에 멜로디 음이 명확히 들리도록 손가락 각도를 조절해야 합니다." << endl;
		cout << "기술난이도 : " << "**" << endl;
		break;
	case 5:
		cout << normal[2].getSkillName() << endl;
		cout << "의미 : 손가락을 순차적으로 펴면서 매우 빠르고 일정한 박자로 쪼개어서 연주한다" << endl;
		cout << "Tip : 손가락 자체의 힘으로 밀어내기보다, 엄지손가락 안쪽에 손가락들을 모아 쥐었다가 스프링이 튕겨 나가듯 탄력 있게 펼쳐야 합니다." << endl;
		cout << "기술난이도 : " << "**" << endl;
		break;
	case 6:
		cout << high[0].getSkillName() << endl;
		cout << "의미 : 개방현에서 오른손 손가락으로 탄현하는 것과 동시에 왼손 프렛을 대었다 바로 떼며 소리를 낸다" << endl;
		cout << "Tip : 왼손이 누른 프렛에 정확히 12를 더한 위치의 프렛 바(Fret Bar) 바로 위를 오른손으로 겨냥해야 합니다." << endl;
		cout << "기술난이도 : " << "***" << endl;
		break;
	case 7:
		cout << high[1].getSkillName() << endl;
		cout << "의미 : 리듬감을 주며 '착'하는 드럼(스네어) 소리를 내는 기술" << endl;
		cout << "Tip : 오른손 손가락을 가볍게 구부려 손가락 살과 손톱이 동시에 줄을 때리도록 내리칩니다." << endl;
		cout << "기술난이도 : " << "***" << endl;
		break;
	default:
		break;
	}
}
