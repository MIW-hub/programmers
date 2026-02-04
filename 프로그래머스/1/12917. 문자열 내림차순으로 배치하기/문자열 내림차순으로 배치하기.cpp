#include <string>
#include <vector>
#include <cctype>
#include<algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.rbegin(), s.rend());
    
    for (char a : s) {
        if (!isupper(a)) {
            answer += a;
        }        
    }
    for (char b : s) {
        if (isupper(b)) {
            answer += b;
        }
    }

    return answer;
}
