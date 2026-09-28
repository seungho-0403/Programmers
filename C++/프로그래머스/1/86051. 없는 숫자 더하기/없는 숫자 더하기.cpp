#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i=1; i<=9; i++)
        answer+=i;
    while(numbers.empty()==0){
        answer-=numbers.back();
        numbers.pop_back();
    }
    return answer;
}