#include <iostream>
using namespace std;

#define MAXN 2000000
#define sd(x) scanf("%d", &x)

int s[MAXN], a[MAXN];

int main()
{
    int t, n, l, r, q, i;
    sd(t);
	while(t--){
		sd(n);
		for(i = 0; i < n; i++){
			sd(a[i + 1]);
		}
		s[0] = 0;
		for(i = 0; i < n; i++){
			s[i + 1] = s[i] ^ a[i + 1];
		}
		sd(q);
		while(q--){
			sd(l); sd(r);
			printf("%d\n", s[r + 1] ^ s[l]);
		}
	}
    return 0;
}
