#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

char s[100001],c[100001];
int main() {
	int k;int i;
	scanf("%d",&k);
	scanf("%s",s);
	int len = strlen(s);
	int n = 0;
	while( k-- ) {
		int m; n = 0;
		for(i = 0; i < len; i+=2) {
			c[n++] = s[i];
		}
		if(len & 1) m = i - 3; else m = i - 1;
		for(i = m; i >= 0; i-=2) {
			c[n++] = s[i];
		}
		c[n] = '\0';
		
		strncpy(s,c,len);  
	}
	printf("%s\n",c);
	return 0;
}
