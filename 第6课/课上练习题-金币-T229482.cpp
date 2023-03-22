#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int k,sum=0,n=0;
	cin >> k;
	for(int i=1;i<=k;i++){
		n++; //
		for(int j=1;j<=n;j++){
			sum += n;
			i++;
			if(i>k){
				break;
			}
		}
		i--;
	}
	cout << sum;
	return 0;
}
