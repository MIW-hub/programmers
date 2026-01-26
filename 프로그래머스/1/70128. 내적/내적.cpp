#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    for(int c = 0; c< a.size(); c++){
       answer += a[c]*b[c];
    }
    return answer;
}