#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
main()
{ 
    srand(time(NULL));
	int r,v,n,a;
	char s[26]={'A', 'B', 'C', 'D', 'E','F','G', 'H', 'I' ,'J', 'K', 'L', 'M', 'N', 'O','P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	r=rand()%26+0;
	v=rand()%26+0;
	n=rand()%10+0;
	a=rand()%10+1;
	printf("OTP:%c%d%c%d%d",s[r],n,s[v],a,s[a]); 
}
