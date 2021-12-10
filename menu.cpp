#include<stdio.h>

int main(){
	int n1=0, n2=0;
	int count=0;
	int money=0;
	while(1){
	printf("1. 자장면 5000원\n");
	printf("2. 짬뽕 5000원\n");
	printf("3. 볶음밥 6000원\n");
	printf("4. 탕수면 12000원\n");
	printf("음식 종류와 개수를 입력하세요 : ");
	scanf("%d %d",&n1, &n2 );
		if(n1>4){
			printf("잘못입력하셨습니다");
			break;
		}
		else if(n1==1){
			printf("자장면 %d개는 %d원 입니다\n", n2, n2*5000); 
			count=n2*5000;
		}
		else if(n1==2){
			printf("짬뽕 %d개는 %d원 입니다\n", n2, n2*5000); 
			count=n2*5000;
		}
		 else if(n1==3){
			printf("볶음밥 %d개는 %d원 입니다\n", n2, n2*6000); 
			count=n2*6000;
		}
		else if(n1==4){
			printf("탕수육 %d개는 %d원 입니다\n", n2, n2*12000); 
			count=n2*12000;
		}
		printf("돈을 넣어주세요.\n");
		scanf("%d",&money);
		printf("잔돈%d원 받아가세요.\n",money-count); 
	} 
}
