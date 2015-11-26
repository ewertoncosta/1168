//
//  main.c
//  1168
//
//  Created by Ewerton Costa on 16/11/15.
//  Copyright © 2015 Ewerton Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
int main (){
    int N, i, j, leds;
    char led [1000];
      
    scanf ("%d",&N);
     
    //Repete até o numero de casos de teste definido
    for (j=1;j<=N;j++){
        leds = 0;
         
        //Pede os numeros do Led 
        scanf ("%s", led);
        //Repete até chegar no tamanho do vetor de led
        for (i=0;i<strlen(led);i++){
            //Dependendo do numero que estiver na posicao, 
            //soma o numero de leds necessarios
            if(led [i]=='1'){
            leds+=2;
            }
            if(led [i]=='2'){
            leds+=5;
            }
            if(led [i]=='3'){
            leds+=5;
            }
            if(led [i]=='4'){
            leds+=4;
            }
            if(led [i]=='5'){
            leds+=5;
            }
            if(led [i]=='6'){
            leds+=6;
            }
            if(led [i]=='7'){
            leds+=3;
            }
            if(led [i]=='8'){
            leds+=7;
            }
            if(led [i]=='9'){
            leds+=6;
            }
            if(led [i]=='0'){
            leds+=6;
            }
        }
    //Imprime o valor
    printf ("%d leds\n", leds);
    }
return 0;
}
