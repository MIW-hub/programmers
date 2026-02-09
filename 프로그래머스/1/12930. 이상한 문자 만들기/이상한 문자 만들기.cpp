#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    char c;
    int b = 0;

    for (char a : s) {
        if (a == ' ') {        
            answer += a;
            b = 0;             
            continue;          
        }

        if (b % 2 == 0) {
            c = toupper(a);
            answer += c;
        }
        else {
            c = tolower(a);
            answer += c;
        }
        b++;
    }


    return answer;
}
