#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    vector<long long>number;
    long long a = stoll(p);
    int b= p.length();
    
    for(long long i=0; i<=t.length() - b; i++)
    {
        string sub = t.substr(i, b);
        number.push_back(stoll(sub));
    }
    for(long long j : number)
    {
        if(j <= a){
            answer ++;
        }
    }
    
    
    
    return answer;
}