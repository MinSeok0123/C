#include<stdio.h>

int main(){
	int n=0,sum=0;
	while(1){
		scanf("%d",&n);
	for(int i = 0; i<=n; i++){
		sum+=i;
	}
	
	if(n==0){
		break;
	}
	printf("%d",sum);
}
return 0;
}
