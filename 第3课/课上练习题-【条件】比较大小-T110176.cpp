#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	int x,y;
	cin >> x >> y;
	if(x>y){
		cout << ">";
	}else if(x==y){
		cout << "=";
	}else{
		cout << "<";
	}
	return 0;
}
