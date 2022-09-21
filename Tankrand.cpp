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
int p[5090];
const int N=5000;
int main()
{
    srand(time(NULL));
    int n=rand()%70+1;
    for(int i=1;i<=1000;i++) p[i]=i;
    for(int i=1;i<=10000000;i++) swap(p[rand()%n+1],p[rand()%n+1]);
    cout<<n<<endl;
    int m=3;
    cout<<m<<endl;
    for(int i=1;i<=m;i++) printf("%d\n",p[i]);
    return 0;
}