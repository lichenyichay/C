#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
	
	cout << "-----摩斯密码发报机-----" << endl; 
	cout << "请输入 1 表示短音，2 表示长音" << endl; 
	char morse;  				// 字符型变量 
	while(true) {				// while循环
		morse = getch();  		// 从控制台读取一个字符，但不显示在屏幕上
		if(morse == '1') {
			cout << ".";
			Beep(800, 350);		// 系统鸣笛
		}else if(morse == '2') {
			cout << "-";
			Beep(800, 600);
		}
	}
	
	return 0;
}
