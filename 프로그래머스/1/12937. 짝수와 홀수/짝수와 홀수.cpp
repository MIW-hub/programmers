#include <string>
#include <vector>

using namespace std;


string solution(int num) {
    string answer = "";
    if(num % 2 == 0 || num == 0){
    string answer = "Even";
       return answer;
    }else{
    string answer = "Odd";
    return answer;
    }
}