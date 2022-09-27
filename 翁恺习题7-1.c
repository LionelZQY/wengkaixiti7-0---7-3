#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	scanf("%d",&num);
	int const n=10;
	int t;
	t=num;
	int cnt=0;
	int cnt2=0;
	for(;t!=0;cnt++){
		t=t/n;
	}
	printf("%d\n",cnt);
	int mask=pow(10,cnt-1);
	int a[cnt];
	for(int i=0;mask!=0;i++){
		a[i]=num/mask;
		num%=mask;
		mask/=10;
	}
	if(cnt==3){
		for(int i=1;i<=a[cnt2];i++){
			printf("B");
		}
		cnt--;
		cnt2++;
	}
	if(cnt==2){
		for(int i=1;i<=a[cnt2];i++){
			printf("S");
		}
		cnt--;
		cnt2++;
	}
	if(cnt==1){
		for(int i=1;i<=a[cnt2];i++){
			printf("%d",i);
		}
	}
	return 0;
}
