#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	int a;
	cin >> a;
	if(a == 1 or a == 2 or a == 3 or a == 4 or a == 5){
		cout << "weekday";
	}else if(a == 6 or a == 7){
		cout << "weekend";
	} 
	return 0;
}
