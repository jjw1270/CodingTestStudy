//https://school.programmers.co.kr/learn/courses/30/lessons/1845
//포켓몬

#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;

    int max = nums.size() / 2;

    unordered_map<int, int> um;

    for (auto& n : nums)
    {
        um[n]++;
    }

    if (um.size() >= max)
    {
        answer = max;
    }
    else
    {
        answer = um.size();
    }

    return answer;
}