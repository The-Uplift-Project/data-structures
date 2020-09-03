/* Author: Madhura11-1"*/



#include <bits/stdc++.h>
using namespace std;
int height = 20;
int width = 20;
int finish = false;
int x = 10,y = 10,desx,desy;
int len;
int tailX[100],tailY[100];

void Initiate(){

     x = x;
     y = y;
     desx = rand()%width;
     desy = rand()%height;
}

void printOutput(){

    for(int i=0;i<width+2;i++){
        cout<<"# ";
    }
    cout<<endl;
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(j == 0){
                cout<<"# ";
            }
            if(i == y && j == x){
                cout<<"* ";
            }
            else if(j == desx && i == desy){
                cout<<"$ ";
            }
            else
            {
                bool flag = false; 
                for(int h=0;h<len;h++){
                    if(tailX[h] == j && tailY[h] == i){
                        cout<<"* ";
                        flag = true;
                    }
                }
                if(!flag)
                cout<<"  ";
            }
            if(j == width-1){
                cout<<"#";
            }
            if(x == height-1 || x == 0){
                finish = true;
            }
            if(y == 0 || y == width-1){
                finish = true;
            }
            if(x == desx && y == desy){
                Initiate();
                len++;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<width+2;i++){
        cout<<"#"<<" ";
    }
}

void Execute(){

    int prex1 = tailX[0];
    int prey1 = tailY[0];

    tailX[0] = x;
    tailY[0] = y;
    int prex2,prey2;

    for(int i=1;i<len;i++){

    prex2 = tailX[i];
    prey2 = tailY[i];

     tailX[i] = prex1;
     tailY[i] = prey1;

     prex1 = prex2;
     prey1 = prey2;

    }

    char input;
    cin>>input;
    switch (input)
    {
    case 'w':
        y--;
        break;
    case 's':
    y++;
    break;
    case 'a':
    x--;
    break;
    case 'd':
    x++;
    break;
    default:
        break;
    }

}

Snake_Game_Driver(){

 Initiate();
 while(!finish){

     printOutput();
     Execute();
     
 }

    return 0;
}
