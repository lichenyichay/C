#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	int a;
	cin >> a;
	if(a%3==0){
		if(a%5==0){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}else{
		cout << "NO";
	}
	return 0;
}
