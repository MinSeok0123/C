#include <stdio.h>
int main() {
	int age[101]={};
	int n, box, holy=0; 
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&age[i]);
		}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(age[i]>age[j]){
				box=age[i];
				age[i]=age[j];
				age[j]=box;
			}
		}
	}
	holy = age[0] - age[n-1];
	printf("%d", holy);
	return 0;
}

