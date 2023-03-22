#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a;
	cin >>a;
	if (a<7){
		cout << "Acidic";
	}else if(a == 7){
		cout << "neutral";
	}else{
		cout << "alkalinity";
	}
	return 0;
}
