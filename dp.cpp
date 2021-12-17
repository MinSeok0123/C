#include <stdio.h>
int data=0;
int main(){
	int n1=0,n2=0;
	int max=0;
	int value=0;
	scanf("%d %d", &n1, &n2);
	int list[n1];
	int arr[n1-(n2-1)];
	for(int i=0; i<n1; i++){
		scanf("%d",&list[i]);
	}
	
	for(int i=0;i<n2;i++){
		data+=list[i];
	}
	arr[0]=data;
	
	for(int i=1;i<n1-(n2-1);i++){
		data = data-list[i-1]+list[i+(n2-1)];
		arr[i]=data;
	}
	value = arr[0];
	for(int i=1; i<n1-(n2-1); i++){
		if(value<arr[i])
			value=arr[i];
	}
	printf("%d",value);
	return 0;
}
