#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cctype>
#include<queue>
#include<ctime>
#include<string>
#include<cstring>
using namespace std;
inline int read(){
	int num=0,f=1;
	char rd=getchar();
	while(!isdigit(rd)){
		if(rd=='-') f=-1;
		rd=getchar();
	}
	while(isdigit(rd)){
		num=num*10+rd-48;
		rd=getchar();
	}
	return f*num;
}
int dat[1001],maxn;
double p[5001];
int main()
{
	int n=read();
	for(int i=1;i<=n;i++) maxn=max(maxn,dat[i]=read());
	for(int i)
}