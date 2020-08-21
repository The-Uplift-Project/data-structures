#include <stdio.h>
int main(){
	int num,i;
	scanf("%d", &num);              			    
	int a[num],b[num];
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<num;i++){
		printf("%d ",a[i]+b[i]);
	}
 return 0; 
}
