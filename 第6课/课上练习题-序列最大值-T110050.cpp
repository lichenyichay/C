#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	long long n,m,max;
	cin >> n>>m;
	max = m;
	for(int i=1;i<n;i++){
		cin >> m;
		if(m>max){
			max=m;
		}
	}
	cout << max;
	return 0;
}
