#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	long long c = 0;
	if (a == b) {
		return a;
	}
	if (a < b) {
		for (int i = a; i <= b; i++) {
			c += i;
		}
	}
	else if (b < a) {
		for (int i = b; i <= a; i++) {
			c += i;
		}
	}
	else
	{
		c = a;
	}

	answer = c;
	return answer;
}
