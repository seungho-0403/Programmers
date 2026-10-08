#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char)*3*(n+1));
    char* p = answer;
    for(int i =0; i<n; i++){
       memcpy(p, (i%2 == 0) ? "수" : "박", sizeof(char)*3);
       p+=3;
    }
    *p = '\0';
    return answer;
}