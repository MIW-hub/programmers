#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    //n = 벽 , m = 룰러의 길이,  section = ?
    vector<int> a(n+1,0);
    for(int i : section)
    {
        a[i] = 1;
    }
    
    for(int j = 0; j<n+1; j++ )
    {
        if(a[j] == 1)
        {
            answer++;
            for(int k = j; k < j + m; k++)
            {
                if(k <= n)
                a[k] = 0;
            }
        }
    }
    
    
    return answer;
}