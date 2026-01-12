#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int y = 0;
    int z = x;
    if (x == 0) {
        return false;
    }

    while (x != 0)
    {
        y += x % 10;
        x = x / 10;
    }
    if (z % y == 0) {
        answer = true;
    }
    else {
        answer = false;
    }

    return answer;
}