#include "PlayerManager.h"
#include<iostream>
#include<string>
using namespace std;

void PlayerManager::run() {
	cout << ">>프로그램을 시작합니다.<<" << endl;
	Player p; // Player 객체를 만든다.
	SongList s; // SongList객체를 만든다
	SongInfo si; // SongInfp객체를 만든다
	PostureList pl; // PostureList 객체를 만든다
	PostureInfo pi; // PostureInfo 객체를 만든다
	CompletionRecord cr; // CompletionRecord 객체를 만든다
	PracticeLog plg; //  객체를 만든다
	SelfEvalution se; // SelfEvalution 객체를 만든다
	NextSongGuide n; // NextSongGuide 객체를 만든다
	LevelJudge l; // LevelJudge 객체를 만든다.
	p.inputPlayer(); // 연주자를 생성한다
	p.showPlayer();
	
	while (1) {
		cout << "통기타 핑거스타일 연주자 성장 관리 시스템" << endl;
		cout << "=======================================" << endl;
		cout << "1. 완곡 체크" << endl;
		cout << "2. 곡 목록 조회" << endl;
		cout << "3. 연습 일지" << endl;
		cout << "4. 기타 연주 자세 팁" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "=======================================" << endl;
		cout << "메뉴 선택 번호를 입력하세요 : ";
		cin >> selectNum;
		switch (selectNum)
		{
		case 1: //완곡체크
			cr.inputDate();
			cr.showRecord(); 
			se.inputEvalution();
			se.printScore();
			n.guide();
			break;
		case 2: //곡 목록 조회
			s.showSongList();
			si.setSongNum();
			si.showInfo(si.getSongNum());
			break;
		case 3://연습 일지
			plg.addLog();
			plg.setAccumulated(plg.getPracticeMin());
			plg.showPracticeLog();
			break;
		case 4://기타 연주 자세 팁
			pl.showPostureList();
			pi.inputPostureNum();
			pi.showPostureInfo();
			break;
		case 5:
			cout << "프로그램을 종료합니다." << endl;
			return;
		default:
			cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
			break;
		}
	}
}