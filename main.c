#include <stdio.h>
#include "lr.h"
int main()
{
    int n, c, z;
    printf("Which number of laboratorki? \n" );
    scanf("%d", &n);
    if (n<8)
        {
        if (n==1)
        {
        printf("Basic(1) or additional(2)?");
        scanf("%d", &z);
        if (z==1){
        return lr1();
        }
        if (z==2)
        {
        return lr11();
        }
        }
        if (n==2)
        {
        printf("Basic(1) or additional(2)?");
        scanf("%d", &z);
        if (z==1){
        return lr2();
        }
        if (z==2)
        {
        return lr22();
        }
        }
        if (n==3)
        {
        printf("Basic(1) or additional(2)?");
        scanf("%d", &z);
        if (z==1){
        return lr3();
        }
        if (z==2)
        {
        return lr33();
        }
        }
        if (n==4)
        {
        printf("Basic(1) or additional(2)?");
        scanf("%d", &z);
        if (z==1){
        return lr4();
        }
        if (z==2)
        {
        return lr44();
        }
        }
        if (n==5)
        {
        printf("Basic(1) or additional(2)?");
        scanf("%d", &z);
        if (z==1){
        return lr5();
        }
        if (z==2)
        {

       return lr55();
        }
        }
        if (n==6)
        {
        printf("Basic(1) or additional(2)?");
        scanf("%d", &z);
        if (z==1){
        return lr6();
        }
        if (z==2)
        {

       return lr66();
        }
        }
        if(z!= 1 || z!=2)
        {
        printf ("Lets try again");
        }
        if (n==7)
        {
        printf("Basic(1) or additional(2)?");
        scanf("%d", &z);
        if (z==1){
        return lr7();
        }
        if (z==2)
        {
        printf("Netu");
        }
        }

    }
    if (n>8)
    {
        printf("Unknown labotory work");
        return 1;
    }

    return 0;
}



