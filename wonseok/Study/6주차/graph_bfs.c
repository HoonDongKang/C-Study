#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define MAX_NODES 10

void BFS(int start, int n, int graph[][MAX_NODES]);

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[MAX_NODES][MAX_NODES];
    printf("Enter adjacency matrix of the graph:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    int startNode;
    printf("Enter the starting node: ");
    scanf("%d", &startNode);

    BFS(startNode, n, graph);

    return 0;
}

void BFS(int start, int n, int graph[][MAX_NODES]) {
    bool visited[MAX_NODES] = { false };
    int queue[MAX_NODES];
    int front = -1, rear = -1;

    queue[++rear] = start;
    visited[start] = true;

    printf("BFS traversal starting from node %d: ", start); //시작점 정해주기

    while (front != rear) {
        int currentNode = queue[++front]; //큐에 추가해주기
        printf("%d ", currentNode);

        for (int i = 0; i < n; i++) {
            if (!visited[i] && graph[currentNode][i] == 1) { //방문하지 않았다면
                queue[++rear] = i; //추가
                visited[i] = true;
            }
        }
    }
    printf("\n");
}
