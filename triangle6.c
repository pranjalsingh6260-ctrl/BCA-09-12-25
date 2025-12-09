#include<stdio.h>
int main()
{
    int i, sp, st;
    int n = 5;   

    for(int i=n ; i>=1 ; i--){
        for(int sp = 1; sp<=n-i; sp++){
            printf(" ");
        }
        for(int st = 1; st<=(2*i-1); st++){
            if(st==1 || st==(2*i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    } 
   for(int i=2 ; i<=n ; i++){
        for(int sp = i; sp<n; sp++){
            printf(" ");
        }
        for(int st = 1; st<=(2*i-1); st++){
            if(st==1 || st==(2*i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}