#include <stdio.h>

void Print(float *M, int n, int i)
{

    if (n)
    {
        if (n & 1)
            printf("%f ",M[i]);
        Print(M, n >> 1, i + 1);
    }
}

int main() {
    int n,k,num=0,m=0;

    printf("Enter number of elements in your set: \n");
    scanf("%d",&n);

    float A[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter an element [%d]: ",i+1);
        scanf("%f",&A[i]);
    }
    printf("Enter number of elements in Universum: \n");
    scanf("%d",&k);

    float U[k];
    for(int i=0; i<k; i++)
    {
        printf("Enter an element [%d]: ",i+1);
        scanf("%f",&U[i]);
    }
    printf("Your set of numbers:\n");
    for(int i=0; i<n; i++)
    {
        printf("| %f |", A[i]);
    }
    printf("\n");
    printf("Universum :\n");
    for(int i=0; i<k; i++)
    {
        printf("| %f |", U[i]);
    }
    float M[k];
    printf("\n\n");
    for (int i = 0; i < k; i++) {

        for (int j = 0; j < n; ++j) {
            if (U[i] == A[j]) {
                break;
            }
            if (j == n - 1) {
                M[m] = U[i];
                num += 1;

                printf("| %f |", M[m]);
                m +=1;
            }
        }

    }



    int r, i, size;
    size = num;
    r = 1 << size;

    printf("\n\nA = { 0");
    for (i = 0; i < r; i++)
    {
        Print(M, i, 0);
        printf(" | ");
    }
    printf("\n}");
    return 0;
}
