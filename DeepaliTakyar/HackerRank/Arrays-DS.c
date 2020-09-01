#include<stdio.h>
#include<stdlib.h>

void Input(int *p, int size){  //for taking input from user
	int i;
	printf("enter array elements");
	for(i=0; i<size; i++){
		scanf("%d",&(p[i]));
	}
}

void Display(int *p, int size){  //for printing array elements
	int i;
	printf("elements are\n");
	for(i=0; i<size; i++){
		printf("%d ",p[i]);
	}
}

void Reverse(int *p,int size){  //function to reverse array
	int i,j;
	int *ptr;   //declares pointer ptr in stack

	ptr=(int*)malloc(size*sizeof(int));  //takes space in heap
	for(i=0, j=size-1; i<size, j>=0; i++,j--){
		ptr[j]=p[i];
	}
	
	for(i=0; i<size; i++){
		p[i]=ptr[i];
	}
	printf("\nafter reversing ");
}

int main(){
	int *p;
	int size,i;
	printf("enter size of array");
	scanf("%d",&size);
	
	p=(int *)malloc(size*sizeof(int));
	
	Input(p,size);   //function call 
	Display(p,size);
	
	Reverse(p,size);
	Display(p,size);
	
	free(p);
	return 0;
}
