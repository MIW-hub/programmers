#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    string a = "";
  while (n > 0) {
        a += to_string(n % 3); 
        n /= 3;
    }
    for (char c : a) {
        
        answer = answer * 3 + (c - '0');
    }

    return answer;
}