#include <stdio.h>
int main() {
	int f, b;
	char m;
	scanf("%d %c %d", &f, &m, &b);
	b = b / 1000000;
	f = f / 10000;
	if(b==1){
		f = f + 1900;
		f = 2020 - f;
			printf("%d M", f);
	}
	if(b==2){
		f = f + 1900;
		f = 2020 - f;
			printf("%d W", f);
	}
	if(b==3){
		f = f + 2000;
		f = 2020 - f;
			printf("%d M", f);
	}
	if(b==4){
		f = f + 2000;
		f = 2020 - f;
			printf("%d W", f);
	}
}

