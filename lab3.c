#include <stdlib.h>
#include "math.h"
#include "stdio.h"
int main(){
    int beginOfArray, endOfArray, lengthOfArray, temp;                    // variables
    int *numbers;                                        // my dynamically allocated array from beginOfArray to endOfArray, implemented below
    scanf("%i%*c%i", &beginOfArray, &endOfArray);             // input beginOfArray and endOfArray
    if (beginOfArray>=0 && endOfArray>=0)
        lengthOfArray=endOfArray-beginOfArray+1;
    if (beginOfArray<0 && endOfArray>=0)
        lengthOfArray=abs(beginOfArray)+endOfArray+1;
    if (beginOfArray<0 && endOfArray<=0)
        lengthOfArray=abs(beginOfArray)-abs(endOfArray)+1;
    numbers= malloc(lengthOfArray*sizeof(int));         // mallocating array
    for(int i=0; i<=lengthOfArray; i++) {
        temp=beginOfArray;                                      // temp is created to remember beginOfArray (like temp in swap) will be needed in line 25
        redivide:if(abs(temp)%5==0 && abs(temp)%2==1){  // checking if number has 5(line 15-30) and removing
            i--;
            lengthOfArray--;                                // Veres I'm in history
            beginOfArray++;                             //_░▒███████
        continue;                                       //░██▓▒░░▒▓██
    }                                                   //██▓▒░__░▒▓██___██████
    else{                                               //██▓▒░____░▓███▓__░▒▓██
        while(abs(temp)>10){                            //██▓▒░___░▓██▓_____░▒▓██
            temp=abs(temp)/10;                          //██▓▒░_______________░▒▓██
            goto redivide;                              //_██▓▒░______IoT______░▒▓██
        }                                               //__██▓▒░_____________░▒▓██
        numbers[i]=beginOfArray;                         //___██▓▒░__________░▒▓██
        beginOfArray++;                                 //____██▓▒░________░▒▓██
    }                                                   //_____██▓▒░_____░▒▓██
    }                                                   //______██▓▒░__░▒▓██
    for(int i=0; i<lengthOfArray;i++ ){                    //_________░▒▓██
        printf("%i ", numbers[i]);               // printing array
    }

    printf("=>%i ", lengthOfArray);                 // printing the length of row
}
