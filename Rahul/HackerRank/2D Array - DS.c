#include<stdio.h>
#include<stdlib.h>

const int m=6,n=6;
int sum1(int a, int b,int arr[m][n]){
    int sum=0;
    int i,j;

    for(i=a;i<a+3;i++){
        for(j=b;j<b+3;j++){
            if(i==a+0 || i==a+3-1||j==b+1)
                sum+=arr[i][j];    
            }
    }return sum;
}
int main(){
    int i,j,max;
    int arr[6][6];
    int sum_array[4][4];
    
    
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&arr[i][j]);
            if(!(arr[i][j]>=-9) || !(arr[i][j]<=9) ){
                exit(0);
            }
        }
    }

    for(i=0;i<4;i++){ //0 
        for(j=0;j<4;j++){//0 1
            sum_array[i][j]=sum1(i,j,arr);

        }
    }
    
    
    max=-9999;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(max<sum_array[i][j]){
                max=sum_array[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}
    
