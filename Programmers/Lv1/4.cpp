//https://school.programmers.co.kr/learn/courses/30/lessons/161990
//바탕화면 정리

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;

    int lux = wallpaper.size() - 1;           //세로
    int luy = wallpaper.front().size() - 1;   //가로

    answer = { lux, luy, 0, 0 };

    //드래그 시작 점 찾기 - 제일 왼쪽 + 제일 위
    //드래그 끝 점 찾기 - 제일 오른쪽+1 + 제일 아래+1

    for (int i = 0; i < wallpaper.size(); i++)
    {
        for (int j = 0; j < wallpaper[i].size(); j++)
        {
            if (wallpaper[i][j] == '#')
            {
                answer[0] = min(answer[0], i);
                answer[1] = min(answer[1], j);
                answer[2] = max(answer[2], i + 1);
                answer[3] = max(answer[3], j + 1);
            }
        }
    }

    return answer;
}