#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

unsigned long long int h[100001],t[100001];
int main() {
	unsigned long long int n,sum = 1;
	scanf("%llu",&n);
	scanf("%llu",&h[0]); t[0] = 1;
	for(int i = 1; i < n; i++) {
		scanf("%llu",&h[i]);
	}
	sort(h,h+n);
	for(int i = 1; i < n; i++) {
		if( h[i] > h[i-1]) t[i] = t[i-1]+1; 
		else t[i] = 1; 
		sum+=t[i]; 
	}
	
	
	printf("%llu\n",sum);
	return 0;
}
