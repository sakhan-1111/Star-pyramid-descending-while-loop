#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1;
    int j=5;

    while(i<=5){
        while(j>=i){
            j--;
            printf("* ");
            }
        printf("\n");
        i++;
        j=5;
    }
    return 0;
}
