#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguess=0;
    srand(time(0));
    number=rand()%100+1;  //Generates the number between 1 to 100
    //printf("The number is %d \n",number); omit the statement because we do not have to show the random no.
    do{
       printf("Guess the number between 1 to 100 \n");
       scanf("%d",&guess);
         if(guess>number){
                    printf("Lower number please \n");
            }else if (guess<number){
                    printf("Higher number please \n");
            }else if (nguess<=6){
                    printf("BRAVO! You guessed the number in %d attempts \n",nguess);
                }else{
                    printf("Good try! You guessed the number in %d attempts \n",nguess);
                }
                nguess++;
    }while(guess!=number);
    return 0;
}
