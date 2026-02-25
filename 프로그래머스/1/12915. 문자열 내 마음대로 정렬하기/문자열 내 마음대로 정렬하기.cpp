#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int a;
bool sum(string& str1,string& str2)
{
    if (str1[a] == str2[a]) {
        return str1 < str2;
    }
   
    return str1[a] < str2[a];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    a = n;
    
    sort(answer.begin(),answer.end() ,sum);
   
    return answer;
}