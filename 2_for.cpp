#include<stdio.h>

void next(int value){
	for(int i=0; i<value; i++){
		for(int j=1; j<=value; j++){
			printf("%00d ",i*value+j);
		}
		printf("\n");
	}
}


int main(){
	int value=0;
	scanf("%d",&value);
	for(int i=0; i<=value; i++){
		for(int j=1; j<=value; j++){
		printf("%d ",j);	
		}
		printf("\n");
	}
	printf("\n");
	next(value);
	return 0;
}
