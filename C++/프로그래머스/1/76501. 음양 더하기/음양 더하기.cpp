#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    while(absolutes.empty()==false){
        if(signs.back()==true)
            answer+=absolutes.back();
        else
            answer-=absolutes.back();
        absolutes.pop_back();
        signs.pop_back();
    }
    return answer;
}