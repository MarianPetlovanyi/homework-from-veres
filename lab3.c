#include <stdlib.h>
#include "math.h"
#include "stdio.h"
int main(){
    int minX, maxX, rowLength, newX;                    // variables
    int *array1;                                        // my dynamically allocated array from minX to maxX, implemented below
    scanf("%i%*c%i", &minX, &maxX);             // input minX and maxX
    if (minX>=0 && maxX>=0)
        rowLength=maxX-minX+1;
    if (minX<0 && maxX>=0)
        rowLength=abs(minX)+maxX+1;
    if (minX<0 && maxX<=0)
        rowLength=abs(minX)-abs(maxX)+1;
    array1= malloc(rowLength*sizeof(int));         // mallocating array
    for(int i=0; i<=rowLength; i++) {
        newX=minX;                                      // newX is created to remember minX (like temp in swap) will be needed in line 25
        redivide:if(abs(newX)%5==0 && abs(newX)%2==1){  // checking if number has 5(line 15-30) and removing
            i--;
            rowLength--;                                // Veres I'm in history
            minX++;                                     //_░▒███████
        continue;                                       //░██▓▒░░▒▓██
    }                                                   //██▓▒░__░▒▓██___██████
    else{                                               //██▓▒░____░▓███▓__░▒▓██
        while(abs(newX)>10){                            //██▓▒░___░▓██▓_____░▒▓██
            newX=abs(newX)/10;                          //██▓▒░_______________░▒▓██
            goto redivide;                              //_██▓▒░______IoT______░▒▓██
        }                                               //__██▓▒░_____________░▒▓██
        array1[i]=minX;                                 //___██▓▒░__________░▒▓██
        minX++;                                         //____██▓▒░________░▒▓██
    }                                                   //_____██▓▒░_____░▒▓██
    }                                                   //______██▓▒░__░▒▓██
    for(int i=0; i<rowLength;i++ ){                     //_________░▒▓██
        printf("%i ", array1[i]);               // printing array
    }

    printf("=>%i ", rowLength);                 // printing the length of row
}