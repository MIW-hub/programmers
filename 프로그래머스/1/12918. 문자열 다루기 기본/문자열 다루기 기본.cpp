#include <string>
#include <vector>
#include <regex>
using namespace std;

bool solution(string s) {
    return regex_match(s, regex("^(\\d{4}|\\d{6})$"));
}