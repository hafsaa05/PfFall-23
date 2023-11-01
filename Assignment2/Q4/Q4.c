#include <stdio.h>

#define N 5
#define M 5

void findPath(char maze[N][M], int x, int y) {
    if (x == N - 1 && y == M - 1) {
        printf("%d,%d", x, y);
        return;
    }

    if (x < N - 1 && maze[x + 1][y] != 'W') {
        printf("%d,%d ", x, y);
        findPath(maze, x + 1, y);
    } else if (y < M - 1 && maze[x][y + 1] != 'W') {
        printf("%d,%d ", x, y);
        findPath(maze, x, y + 1);
    }
}

int main() {
    char maze[N][M] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'O', 'W'},
        {'O', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'}
    };
    int i,j;

    for ( i = 0; i <= N; i++) {
        for ( j = 0; j < M; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}
