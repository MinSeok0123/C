#include <stdio.h>

int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=1; i<n;i++){
	if(i%2==1){
	for(int j=1; j<=n; j++){
	printf("%00d ",(i-1)*n+j);
}
printf("\n");
}

  else{
  	for(int k=n;k>=1; k--){
  		printf("%00d ",(i-1)*n+k);
	  }
	  printf("\n");
  }
}
    return 0;

}
  
