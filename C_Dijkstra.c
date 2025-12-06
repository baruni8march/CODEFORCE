#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 100005
#define INF 1000000000

typedef struct node {
    int INFO;      
    int WEIGHT;    
    struct node* NEXT;
} NODE;

typedef struct {
    int VERTEX;
    int DIST;
} PAIR;

NODE* GRAPH[MAX];
int DIST[MAX];
int PARENT[MAX];
int VISITED[MAX];
PAIR HEAP[MAX];
int HEAP_SIZE = 0;

void swap(PAIR* a, PAIR* b) {
    PAIR temp = *a;
    *a = *b;
    *b = temp;
}

void heap_push(int v,int dist){
    HEAP[HEAP_SIZE].VERTEX = v;
    HEAP[HEAP_SIZE].DIST = dist;
    int i = HEAP_SIZE++;
    while (i > 0 && HEAP[i].DIST < HEAP[(i - 1) / 2].DIST) {
        swap(&HEAP[i], &HEAP[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

PAIR heap_pop() {
    PAIR min = HEAP[0];
    HEAP[0] = HEAP[--HEAP_SIZE];
    int i = 0;
    while (2 * i + 1 < HEAP_SIZE) {
        int smallest = i;
        int l = 2 * i + 1, r = 2 * i + 2;
        if (l < HEAP_SIZE && HEAP[l].DIST < HEAP[smallest].DIST) smallest = l;
        if (r < HEAP_SIZE && HEAP[r].DIST < HEAP[smallest].DIST) smallest = r;
        if (smallest == i) break;
        swap(&HEAP[i], &HEAP[smallest]);
        i = smallest;
    }
    return min;
}

void insert_edge(int u,int v,int w){
    NODE* new_node=(NODE*)malloc(sizeof(NODE));
    new_node->INFO=v;
    new_node->WEIGHT=w;
    new_node->NEXT=GRAPH[u];
    GRAPH[u]=new_node;
}

void dijkstra(int start,int n){
    for(int i=1;i<=n;i++) {
        DIST[i]=INF;
        PARENT[i]=-1;
    }

    DIST[start] = 0;
    heap_push(start, 0);

    while(HEAP_SIZE>0){
        PAIR curr=heap_pop();
        int u=curr.VERTEX;

        if(VISITED[u]) continue;
        VISITED[u]= 1;

        NODE* ptr=GRAPH[u];
        while (ptr != NULL) {
            int v = ptr->INFO;
            int w = ptr->WEIGHT;
            if (DIST[u] + w < DIST[v]) {
                DIST[v] = DIST[u] + w;
                PARENT[v] = u;
                heap_push(v, DIST[v]);
            }
            ptr=ptr->NEXT;
        }
    }
}

void print_path(int node) {
    if (node == -1) return;
    print_path(PARENT[node]);
    printf("%d ", node);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i <= n; i++) {
        GRAPH[i] = NULL;
        VISITED[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        insert_edge(u, v, w);
        insert_edge(v, u, w);  // undirected
    }

    dijkstra(1, n);

    if (DIST[n] == INF) {
        printf("-1\n");
    } else {
        print_path(n);
        printf("\n");
    }

    return 0;
}
