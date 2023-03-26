#include <bits/stdc++.h>
using namespace std;

int main() {
	
	while(true) {	
		cout << "欢迎来到小码音乐盒" << endl;
		cout << "请输入数字选择歌曲" << endl;
		cout << "1 致爱丽丝" << endl; 
		cout << "2 欢乐颂" << endl; 
		cout << "3 命运交响曲" << endl; 
		cout << "4 夜曲" << endl; 
		int music;
		cin >> music; 
		
		if(music == 1) {
			cout << "致爱丽丝播放中..." << endl;
			system("致爱丽丝.mp3");
		}else if(music == 2) {
			cout << "欢乐颂播放中..." << endl;
			system("欢乐颂.mp3");
		}else if(music == 3) {
			cout << "命运交响曲播放中..." << endl;
			system("命运交响曲.mp3");
		}else if(music == 4) {
			cout << "夜曲播放中..." << endl;
			system("夜曲.mp3");
		}else{
			cout << "输入错误" << endl;
		} 
	}	
		
	return 0;
} 