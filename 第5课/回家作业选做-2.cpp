#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	int a,b,sum,c;
	cin >> a >> b;
	for(int i=1;i<=a;i++){
		cin >>c;
		if(c==b){
			sum +=1;
		}
	}
	cout << sum;
	return 0;
}
