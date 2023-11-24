//https://school.programmers.co.kr/learn/courses/30/lessons/12906
//같은 숫자는 싫어

#include <vector>
#include <iostream>
#include <deque>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    deque<int> dq;

    for (auto& a : arr)
    {
        if (dq.empty() || dq.back() != a)
        {
            dq.push_back(a);
        }
    }

    while (!dq.empty())
    {
        answer.push_back(dq.front());
        dq.pop_front();
    }

    return answer;
}