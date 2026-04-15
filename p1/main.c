#include <stdio.h>

int main(void)
{
    int n=0, ans=0, total=0;
    scanf("%d", &ans);
    
    do {
        scanf("%d", &n);
        
        if (ans>n) {
            printf("%d<?\n",n, n);
            total+=1;
        }
        else if (ans<n) {
            printf("%d>?\n", n, n);
            total+=1;
        }
        else {
            printf("%d==?\n", n,n);
            total+=1;
            printf("%d",total, total);
            break;
        }
    } while(ans!=n);
    

    return 0;
}
