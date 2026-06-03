#include "SongList.h"
#include<iostream>
#include<string>
using namespace std;

//곡을 카테고리 별로 나눈다

SongList::SongList() {

}

SongList::SongList(string title) {
	this->title = title;
}

SongList SongList::beginner[2] = {
    SongList("Kiss The Rain"),
    SongList("흘러가는 구름")
};

SongList SongList::interMediate[2] = {
    SongList("민들레"),
    SongList("wind song")
};

SongList SongList::advanced[4] = {
    SongList("황혼"),
    SongList("구름위의 작은 섬"),
    SongList("토토라의 섬"),
    SongList("기적의 산")
};

SongList SongList::expert[2] = {
    SongList("red shoes dance"),
    SongList("벚꽃 필 무렵")
};

string SongList::getTitle() {
    return title;
}


void SongList::showSongList() {
    cout << "=======================================" << endl;
    cout << "<입문>" << endl;
    for (int i = 0; i < 2; i++) {
        cout << i + 1 << "." << beginner[i].getTitle() << endl;
    }

    cout << "<초급>" << endl;
    for (int i = 0; i < 2; i++) {
        cout << i + 3 << "." << interMediate[i].getTitle() << endl;
    }

    cout << "<중급>" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 5 << "." << advanced[i].getTitle() << endl;
    }

    cout << "<고급>" << endl;
    for (int i = 0; i < 2; i++) {
        cout << i + 8 << "." << expert[i].getTitle() << endl;
    }


    cout << "=======================================" << endl;
}