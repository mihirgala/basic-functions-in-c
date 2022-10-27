#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void putDash(int);

int endLoop(); // returns a value that will be used in main to control the loop

void putScore(int *,int *);

int dice(int);

void main(){
    int dieSize=6,userScore,compScore,loop=1;
    do
    {
        putDash(100);
        printf("Mihir rolled a %d",dice(dieSize));
        putDash(100);
        loop=endloop();
    } while (loop!=0);
    
}

void putDash(int size){
    for(int i=0;i<size;i++)
    if(i<size-1) // this if statement is here to make sure after putDash function there is a \n given everytime.
    printf("-");
    else
    printf("-\n");
}

int endLoop(){
    char c;
    printf("\n\nWould you like to continue\n[y] YES  [n] NO (Exit game)\n\n-> : ");
    scanf("%s",&c);
    if( c =='n' || c == 'N'){
        return 0;
    }
    else if( c =='y' || c =='Y'){
        return 1;
    }