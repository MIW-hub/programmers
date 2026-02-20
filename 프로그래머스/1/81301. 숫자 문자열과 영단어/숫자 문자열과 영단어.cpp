#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> a = {"zero","one","two","three","four","five","six","seven","eight","nine"};
     string b = "";
     string c = "";
    
        for(char d : s)
        {
            
            if(!isdigit(d))
            {   
                b += d;             
                for(int i=0; i<10; i++)
                {
                    if(b == a[i])
                    {
                        c += to_string(i);
                        b.clear();
                    }
                }
            }
            else
            {
                c += d;
            }
        }
    
    answer = stoll(c);
    
    
    return answer;
}