#include <bits/stdc++.h>// ����ͷ�ļ� 
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
