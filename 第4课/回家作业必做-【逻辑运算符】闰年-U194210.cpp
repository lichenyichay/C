#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	long long a;
	cin >>a;
	if(a%4==0){
		if(a%100 == 0){
			if(a%400 == 0){
				cout << "YES";
			}else{
				cout << "NO";
			}
		}else{
			cout << "YES";
		}
	}else{
		cout << "NO";
	}
	return 0;
}
