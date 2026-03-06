#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int bin = 0;
    while(n >= a)
    {
       int bin = n % a;
       int c = (n / a) * b;
       answer += c;   
         n = c + bin;
    }
    
    return answer;
}