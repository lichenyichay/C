#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a;
	cin >> a;
	for(int i=0;i<=a;i++){
		if(i%3==2){
			if(i%5==3){
				if(i%7==2){
					cout << i << endl;
				}
			}
		}
	}
	return 0;
}
