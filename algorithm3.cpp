#include <stdio.h>
int main() {
	int sec = 0;
	int level = 0;
	int list[1001]={};
	int count = 0;
	int i;
	int se;
	scanf("%d %d",&sec, &level);
	for(i=0; i<sec; i++){
		scanf("%d", &list[i]);
		if(list[i] > level){
			count++;
		}
		else
			count = 0;
		if(se < count)
			se = count;
	}
	printf("%d", se);
	return 0;
}

