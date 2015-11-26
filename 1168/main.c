//
//  main.c
//  1168
//
//  Created by Ewerton Costa on 16/11/15.
//  Copyright © 2015 Ewerton Costa. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
int main() {
    int N, i,j, qtdleds;
    char led[1000];
    
    scanf("%d",&N);
    for(j=1;j<=N;j++){
        qtdleds=0;
    
        scanf("%s",led);
        for(i=0;i<strlen(led);i++){
            if(led[i]=='1'){
                qtdleds+=2;
            }
            if(led[i]=='2'){
                qtdleds+=5;
            }
            if(led[i]=='3'){
                qtdleds+=5;
            }
            if(led[i]=='4'){
                qtdleds+=4;
            }
            if(led[i]=='5'){
                qtdleds+=5;
            }
            if(led[i]=='6'){
                qtdleds+=6;
            }
            if(led[i]=='7'){
                qtdleds+=3;
            }
            if(led[i]=='8'){
                qtdleds+=7;
            }
            if(led[i]=='9'){
                qtdleds+=6;
            }
            if(led[i]=='0'){
                qtdleds+=6;
            }
            
        }
        printf("%d leds\n",qtdleds);
    }
    
    return 0;
}
