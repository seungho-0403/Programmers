#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef long long ll;

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    int len=strlen(p);
    ll cmp_num=0;
    for(int i=0; i<len; i++){
        cmp_num*=10;
        cmp_num+=p[i]-'0';
    }
    for(int i=0; i<strlen(t)-(len-1); i++){
        ll num=0;
        for(int j=i; j<i+len; j++){
            num*=10;
            num+=t[j]-'0';
        }
        if(num<=cmp_num)
            answer++;
    }
    return answer;
}