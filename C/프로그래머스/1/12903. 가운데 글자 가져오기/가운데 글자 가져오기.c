#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len=strlen(s);
    char* answer = (char*)malloc(sizeof(char)*5);
    if(len%2==0){
        answer[0]=s[len/2-1];
        answer[1]=s[len/2];
        answer[2]='\0';
    }
    else{
        answer[0]=s[strlen(s)/2];
        answer[1]='\0';
    }
    return answer;
}