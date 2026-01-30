#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector<int>n;
    for (int i = left; i <= right; i++)
    {
        for (int j = 1; j <= i; j++) {            
            if (i % j == 0) {
                n.push_back(j);              
            }
        }
        if (n.size() % 2 == 0) {
            answer += i;
        }
        else {
            answer -= i;
        }
        n.clear();
    }

    return answer;
}