#include <iostream>
using namespace std;

int howMuch(int, int, int, int);
int cost[3000][3000];
int main()
{
    int n, m;

    int l, k;
    int c;
    int totalCost = 0;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &l, &k);
    scanf("%d", &c);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &cost[i][j]);
            totalCost += cost[i][j];
        }
    }

    printf("%d", howMuch(totalCost, l, k, c));
}

int  howMuch(int totalCost, int l, int k, int c)
{
    totalCost = (totalCost + (l * k * c)) / c;
    if (totalCost % c == 0)
    {
        return totalCost;
    }
    else
    {
        return totalCost + 1;
    }
}