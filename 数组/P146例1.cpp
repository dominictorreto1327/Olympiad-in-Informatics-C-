#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,i,num,g[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&g[i]);
	scanf("%d",&num);
	for(i=1;i<=n;i++) if(g[i]==num){
		printf("%d\n",i);
		return 0;
	}
	printf("0\n");
	return 0;
}

