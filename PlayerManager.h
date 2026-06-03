#pragma once
#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H
#include "CompletionRecord.h"
#include "LevelJudge.h"
#include "NextSongGuide.h"
#include "Player.h"
#include "PostureInfo.h"
#include "PostureList.h"
#include "PracticeLog.h"
#include "ProgressStats.h"
#include "SelfEvaluation.h"
#include "SongInfo.h"
#include "SongList.h"

class PlayerManager {
	int selectNum; // 메인 메뉴 선택지
public:
	void run(); // 전체 기능 작동
};



#endif // !PLAYERMANAGER_H

