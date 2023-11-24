//https://school.programmers.co.kr/learn/courses/30/lessons/12901?language=cpp
//2016년

#include <string>
#include <vector>
using namespace std;

vector<string> Day = { "THU","FRI","SAT","SUN","MON","TUE","WED" };

string solution(int a, int b) {
    string answer = "";

    int date = b;

    //2016.01.01 금
    //2월 29일

    for (int i = 1; i < a; i++)
    {
        if (i == 2)
        {
            date += 29;
        }
        else if (i < 8)
        {
            if (i % 2)
            {
                date += 31;
            }
            else
            {
                date += 30;
            }
        }
        else
        {
            if (i % 2)
            {
                date += 30;
            }
            else
            {
                date += 31;
            }
        }
    }

    answer = Day[date % 7];

    return answer;
}