#include <stdio.h>
#include <stdlib.h>
#include <time.h>

rockPaperScissors(char you, char comp){
    //returns 1 if you win, -1 if you lose and 0 if draw

    //Condition for draw
    if(you == comp){
        return 0;
    }

    //Condition for not draw
    if(you=='r' && comp=='p'){
        return -1;
    }else if(you=='p' && comp=='r'){
        return 1;
    }
    if(you=='r' && comp=='s'){
        return 1;
    }else if(you=='s' && comp=='r'){
        return -1;
    }
    if(you=='p' && comp=='s'){
        return -1;
    }else if(you=='s' && comp=='p'){
        return 1;
    }
}

int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<33){
        comp ='s';
    }else if(number>=33 && number<<66){
        comp = 'r';
    }else{
        comp = 'p';
    }
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c", &you);
    int result = rockPaperScissors(you, comp);
    printf("You chose %c and computer chose %c.", you, comp);
    if(result==0){
        printf("Game Drawn!\n");
    }else if(result==1){
        printf("You Win!\n");
    }else if(result==-1){
        printf("You Lose!\n");
    }
    return 0;
}