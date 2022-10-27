#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void putDash(int);

int endLoop(); // returns a value that will be used in main to control the loop

void putScore(int *,int *);


int dice(int);

void main(){
    int dieSize=6,userScore=0,compScore=0,loop=1;
    do
    {
        system("cls");
        putDash(100);
        printf("Mihir rolled a %d\n",dice(dieSize));
        putScore(&userScore,&compScore);
        putDash(100);
        loop=endLoop();
    } while (loop!=0);
    getch();
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
    else{
        printf("Error Invalid Arguments");
        endLoop();
    }
}

void putScore(int *uscore,int *cscore){
    printf("Your Score is : %d\n",*uscore);
    printf("Computer Score is : %d\n",*cscore);
}

int dice(int size){
    srand(time(NULL));
    return ((rand() % size)+1);
}