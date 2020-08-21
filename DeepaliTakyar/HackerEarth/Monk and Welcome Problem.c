#include <stdio.h>

int main(){
	int num,i;
	scanf("%d", &num);              			// Reading input from STDIN
	int a[num],b[num],sum[num];

	for(i=0; i<num; i++){
		scanf("%d ",&a[i]);
	}

	for(i=0; i<num; i++){
		scanf("%d ",&b[i]);
	}

	for(i=0; i<num; i++){
		sum[i]=a[i]+b[i];
		printf("%d ",sum[i]);
	}
	return 0;
}
