#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if(a+b >c){
		if(b+c>a){
			if(a+c>b){
				cout << "yes";
			}else{
				cout << "no";
			} 
		}else{
			cout << "no";
		}
	}else{
		cout << "no";
	}
	return 0;
}
