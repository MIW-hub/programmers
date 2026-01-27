using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    for(long long n = 1; n <= count; n++)
    {
        answer += price * n;
    }
    if(answer < money ){
        return 0;
    }
    answer -= money;

    return answer;
}