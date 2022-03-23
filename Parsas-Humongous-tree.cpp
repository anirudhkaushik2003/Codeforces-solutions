#include <bits/stdc++.h>
#include <malloc.h>
using namespace std;

typedef struct graph graph;
typedef struct vertex *vertexptr;
typedef struct vertex vertex;

typedef struct PQueuenode PQueuenode;
typedef struct PQueue PQueue;
typedef struct PQueuenode *PQptr;

struct vertex
{
    long long int name;
    long long int l;
    long long int r;
    long long int a;
    vertexptr next;
};
struct graph
{
    long long int V;
    long long int E;
    vertexptr *vertices;
};

graph *CreateGraph(long long int V, long long int E)
{
    graph *G;
    G = (graph *)malloc(sizeof(graph));
    assert(G != NULL);
    G->V = V;
    G->E = E;
    G->vertices = (vertexptr *)malloc(sizeof(vertexptr) * ((G->V) + 1));
    for (long long int i = 1; i < (G->V) + 1; i++)
    {
        G->vertices[i] = (vertex *)malloc(sizeof(vertex));
        G->vertices[i]->name = i;
        G->vertices[i]->next = NULL;
        G->vertices[i]->l = INT_MAX;
        G->vertices[i]->r = INT_MAX;
        G->vertices[i]->a = -1;
    }
    assert(G->vertices != NULL);

    return G;
}
void Insert_edge(graph *G, long long int src, long long int dest)
{
    vertexptr new_vertex;
    new_vertex = (vertex *)malloc(sizeof(vertex));
    assert(new_vertex != NULL);
    new_vertex->name = dest;
    //new_vertex->weight = weight;
    new_vertex->next = G->vertices[src]->next;

    G->vertices[src]->next = new_vertex;

    vertexptr double_edge;
    double_edge = (vertex *)malloc(sizeof(vertex));
    assert(double_edge != NULL);
    double_edge->name = src;
    //double_edge->weight = weight;
    double_edge->next = G->vertices[dest]->next;

    G->vertices[dest]->next = double_edge;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        graph *G;
        long long int n, temp1, temp2, src, dest, sum = 0;
        cin >> n;
        G = CreateGraph(n, n - 1);

        bool *array_visited;
        array_visited = (bool *)malloc(sizeof(bool) * n + 1);
        assert(array_visited != NULL);

        long long int traverse[n-1];

        for (long long int j = 0; j < n + 1; j++)
        {
            array_visited[j] = false;
        }

        for (int i = 1; i < n + 1; i++)
        {
            cin >> temp1 >> temp2;
            G->vertices[i]->l = temp1;
            G->vertices[i]->r = temp2;
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> src >> dest;
            Insert_edge(G, src, dest);
            
        }
        for (int i = 1; i < n + 1; i++)
        {
            vertexptr p;
            p = G->vertices[i]->next;
            while (p != NULL)
            {
                if (array_visited[p->name] == false)
                {
                    if (G->vertices[i]->a == -1)
                    {
                        if (G->vertices[p->name]->a == -1)
                        {
                            temp1 = abs(G->vertices[i]->l - G->vertices[p->name]->r);

                            temp2 = abs(G->vertices[i]->r - G->vertices[p->name]->l);
                        }
                        else
                        {
                            temp1 = abs(G->vertices[i]->l - G->vertices[p->name]->a);
                            temp2 = abs(G->vertices[i]->r - G->vertices[p->name]->a);
                        }
                    }
                    else
                    {
                        if (G->vertices[p->name]->a == -1)
                        {
                            temp1 = abs(G->vertices[i]->a - G->vertices[p->name]->r);
                            temp2 = abs(G->vertices[i]->a - G->vertices[p->name]->l);
                        }
                        else
                        {
                            temp1 = abs(G->vertices[i]->a - G->vertices[p->name]->a);
                            temp2 = abs(G->vertices[i]->a - G->vertices[p->name]->a);
                        }
                    }
                    if (temp1 > temp2)
                    {
                        cout << temp1 << "\n";
                        sum += temp1;
                        if (G->vertices[i]->a == -1)
                            G->vertices[i]->a = G->vertices[i]->l;
                        if (G->vertices[p->name]->a == -1)
                            G->vertices[p->name]->a = G->vertices[p->name]->r;
                    }
                    else
                    {
                        cout << temp2 << "\n";
                        sum += temp2;
                        if (G->vertices[i]->a == -1)
                            G->vertices[i]->a = G->vertices[i]->r;
                        if (G->vertices[p->name]->a == -1)
                            G->vertices[p->name]->a = G->vertices[p->name]->r;
                    }
                    array_visited[G->vertices[i]->name] = true;
                }

                p = p->next;
            }
        }
        cout << sum << "\n";
        t--;
    }
}
