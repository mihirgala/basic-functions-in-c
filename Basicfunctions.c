#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

// By @mihirgala on github

void putDash(int); // prints '-' or any symbol or anything you would like just change the code the amount of times put in the args

int endLoop(); // returns a value that will be used in main to control the loop

void putScore(int *,int *); // Just a function to display two pointers as score usually passed through multiple functions like end loop for e.g if score reaches 10 end the loop


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
        return 0; // If c then loop ends if you make your loop condition x!=0
    }
    else if( c =='y' || c =='Y'){
        return 1; // Can be anything depending on your loop I use 1 personally as it's easier for me to understand.
    }
    else{
        printf("Error Invalid Arguments");
        endLoop(); // Function loop if user enters anything other than  y or n
    }
}

void putScore(int *uscore,int *cscore){
    printf("Your Score is : %d\n",*uscore);
    printf("Computer Score is : %d\n",*cscore);
}

int dice(int size){
    srand(time(NULL)); // In c theres nothing fully random so you have to put a seed that changes over and over which can be used by time function.
    return ((rand() % size)+1); // returns a random number between 1 to the given size.
}