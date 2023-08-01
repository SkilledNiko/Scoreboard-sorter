#include <stdio.h>

typedef struct jr
{
    char nom[25];
    int score;
} jr;

void insert(jr *T, int n, jr a)
{
    int i = n - 1;
    while (a.score > T[i].score)
    {
        T[i + 1] = T[i];
        i--;
    }
    T[i + 1] = a;
}

int main()
{
    jr T[10];
    char rpns;
    int i = 0;
    int n = 0;
    do
    {
        printf("\nEntrer nom : ");
        scanf("%s", &T[i].nom);
        printf("Entrer score : ");
        scanf("%d", &T[i].score);
        printf("Do you want to add players? (y/n)");
        rpns = getch();
        i++;
        n++;
        printf("\n----------\n");
    } while (rpns == 'Y' || rpns == 'y');

    // Appel/Execution du insertSort
    for (int j = 1; j < n; j++)
    {
        insert(T, j, T[j]);
    }
    //affichage du tableau trié
    printf("\n----------\n");
    for (i = 0; i < n; i++)
    {
        printf("%s : %d\n", T[i].nom, T[i].score);
    }
    printf("\n----------\n");

    return 0;
}
