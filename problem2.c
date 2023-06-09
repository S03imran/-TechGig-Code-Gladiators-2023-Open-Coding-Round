#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int queries[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &queries[i]);
    }

    for (int i = 0; i < M; i++) {
        int desiredValue = queries[i];
        int cost = 0;
        for (int j = 0; j < N; j++) {
            int operationCost = abs(array[j] - desiredValue);
            cost += operationCost;
        }
        printf("%d ", cost);
    }
    printf("\n");

    return 0;
}
