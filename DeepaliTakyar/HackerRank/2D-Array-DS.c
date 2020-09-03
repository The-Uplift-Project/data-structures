#include<stdio.h>
#include<stdlib.h>

const int x=6,y=6;
int sum(int a, int b,int arr[x][y]){
    int sum=0;
    int i,j;

    for(i=a;i<a+3;i++){
        for(j=b;j<b+3;j++){
            if(i==a+0 || i==a+3-1||j==b+1)
                sum+=arr[i][j];    
        }
    }
	return sum;
}

void max_sum(int sum_array[][y]){  //function to calculate max sum
	int max=-64;
	int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(max<sum_array[i][j])
                max=sum_array[i][j];
        }
    }
    printf("%d",max);
}
int main(){
    int i,j;
    int arr[6][6];
    int sum_array[4][4];  //create to hold sum
    
    
    for(i=0;i<6;i++){  //input array elements
        for(j=0;j<6;j++){
            scanf("%d",&arr[i][j]);
            if(!(arr[i][j]>=-9) || !(arr[i][j]<=9) ){
                exit(0);   //exit on wrong input(-9<=arr[i][j]<=9)
            }
        }
    }

    for(i=0;i<4;i++){   
        for(j=0;j<4;j++){
            sum_array[i][j]=sum(i,j,arr);
        }
    }
    
    max_sum(sum_array);
    return 0;
}
    
