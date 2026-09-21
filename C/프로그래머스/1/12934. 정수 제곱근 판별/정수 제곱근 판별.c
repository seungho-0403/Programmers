#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;
    long long i=0;
    while(i*i<=n){
        if(i*i==n)
            answer=(i+1)*(i+1);
        i++;
    }
    return answer;
}