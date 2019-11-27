#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int dfa = 0;
void q0(char c){
    if(c == 'b')
        dfa = 1;
    else if(c == 'a')
        dfa = 0;
    else
        dfa = -1;
}
void q1(char c){
    if(c == 'b')
        dfa = 1;
    else if(c == 'a')
        dfa = 2;
    else
        dfa = -1;
}
void q2(char c){
    if(c == 'b')
        dfa = 3;
    else if(c == 'a')
        dfa = 0;
    else
        dfa = -1;
}
void q3(char c){
    if(c == 'b')
        dfa = 1;
    else if(c == 'a')
        dfa = 2;
    else
        dfa = -1;
}
int isAccepted(char str[]){  
    int i, len = strlen(str); 
    for (i = 0; i < len; i++){ 
        if (dfa == 0) 
            q0(str[i]); 
        else if (dfa == 1) 
            q1(str[i]); 
        else if (dfa == 2) 
            q2(str[i]); 
        else if (dfa == 3) 
            q3(str[i]); 
        else
            return 0; 
    } 
    if(dfa == 3) 
        return 1; 
    else
        return 0; 
}
int main(){ 
    char str[] = "aaaabbaab"; 
    if (isAccepted(str)) 
        printf("ACCEPTED\n"); 
    else
        printf("NOT ACCEPTED\n"); 
    return 0; 
} 

