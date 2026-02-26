#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string single;

    for(char a : s)
    {
       if(single.find(a) == string::npos)
       {
           answer.push_back(-1);
       }else{ 
           answer.push_back(single.length() - single.rfind(a));
       }
        single += a;
 
    }
 
    return answer;
}