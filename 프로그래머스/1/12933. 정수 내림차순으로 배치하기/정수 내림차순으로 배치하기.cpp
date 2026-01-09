#include <string>
#include <vector>
#include <algorithm>

using namespace std;

  long long solution(long long n) {
    long long answer = 0;
    vector<long long>A;

    while (n != 0) {
        A.push_back(n % 10);
        n = n / 10;
    }

    sort(A.rbegin(), A.rend());
    for (long long it : A) {
        answer = answer * 10 + it;
    }
    return answer;

    
}