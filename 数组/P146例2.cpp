#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,i,win,f=0,left,right,mid,g[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&g[i]);
	scanf("%d",&win);
	left=1;right=n;
	while(left<=right){
		mid=(left+right)/2;
		if(g[mid]==win){
			f=mid;
			break;
		}
		if(win<g[mid]) right=mid-1;
		if(win>g[mid]) left=mid+1;
	}
	printf("%d\n",f);
	return 0;
}

