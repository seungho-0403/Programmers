#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    int len=strlen(s);
    char* answer = malloc(len+1);
    
    int idx=0;
    for(int i=0; i<len; i++){
        if(s[i] == ' ') {
            answer[i] = ' ';
            idx = 1;
        }
        else{
            if(idx%2==0){
                if('a' <= s[i] && s[i] <= 'z')
                    answer[i] = s[i] - 'a' + 'A';
                else
                    answer[i] = s[i];
            }
            else{
                if('A' <= s[i] && s[i] <= 'Z')
                    answer[i] = s[i] - 'A' + 'a';
                else
                    answer[i] = s[i];
            }
        }
        idx++;
    }
    answer[len] = '\0';
    return answer;
}