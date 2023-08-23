#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void DFS(int); //스택 응용
int G[10][10], visited[10], n; //G는 인접 행렬, 10까지 n*n배열의 사이즈를 제한

void main()
{
    int i, j;
    printf("Enter number of vertices:"); //사이즈를 입력받음

    scanf("%d", &n); //사이즈 입력받음
    printf("\nEnter adjecency matrix of the graph:");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &G[i][j]); //행 단위로 열을 움직이며 요소 이동 후 입력받기
    for (i = 0; i < n; i++)
        visited[i] = 0; //방문한 노드를 나타내는 visited[] 배열을 초기화
    DFS(0); //행별로 반복하며 DFS하기
}
void DFS(int i) //재귀적 방법
{
    int j; //i 내부의 j열
    printf("\n%d", i);
    visited[i] = 1;
    for (j = 0; j < n; j++)
        if (!visited[j] && G[i][j] == 1)
            DFS(j);
}
