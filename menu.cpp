#include<stdio.h>

int main(){
	int n1=0, n2=0;
	int count=0;
	int money=0;
	while(1){
	printf("1. ����� 5000��\n");
	printf("2. «�� 5000��\n");
	printf("3. ������ 6000��\n");
	printf("4. ������ 12000��\n");
	printf("���� ������ ������ �Է��ϼ��� : ");
	scanf("%d %d",&n1, &n2 );
		if(n1>4){
			printf("�߸��Է��ϼ̽��ϴ�");
			break;
		}
		else if(n1==1){
			printf("����� %d���� %d�� �Դϴ�\n", n2, n2*5000); 
			count=n2*5000;
		}
		else if(n1==2){
			printf("«�� %d���� %d�� �Դϴ�\n", n2, n2*5000); 
			count=n2*5000;
		}
		 else if(n1==3){
			printf("������ %d���� %d�� �Դϴ�\n", n2, n2*6000); 
			count=n2*6000;
		}
		else if(n1==4){
			printf("������ %d���� %d�� �Դϴ�\n", n2, n2*12000); 
			count=n2*12000;
		}
		printf("���� �־��ּ���.\n");
		scanf("%d",&money);
		printf("�ܵ�%d�� �޾ư�����.\n",money-count); 
	} 
}
