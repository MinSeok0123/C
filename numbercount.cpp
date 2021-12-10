#include <stdio.h>
#include <string.h>
int main() {
	char list[10001]={};
	int len=0;
	int max=0;
	gets(list);
	len=strlen(list);
	for(int i=0; i<len; i++){
		if(list[i]==list[i+1]||max<list[i+1]){
			max=list[i];
		}
	}
	printf("%c",max);
	return 0;
}

