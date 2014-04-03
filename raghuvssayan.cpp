#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int v[10001];
int main() {
	int t,n,a,b,i,j;int temp;
	int sum1 = 0,sum2 = 0;
	scanf("%d",&t);
	while(t--) {
		sum1 = sum2 = 0;
		scanf("%d %d %d",&a,&b,&n);
		 for(int i = 0;i < n;i++) { 
			scanf("%d",&v[i]);
		}
		sort(v,v+n);
		for(i = 0;i < n; i++) {
			if( v[i] + sum1 > a) break;
			sum1+=v[i];
		}
		for(j = 0;j < n; j++) {
			if( v[j] + sum2 > b) break;
			sum2+=v[j];
		}
		if(i > j) printf("Raghu Won\n");
		else if( i < j) printf("Sayan Won\n");
		else printf("Tie\n");
	}
	return 0;
}
