#include <stdio.h>

int main(void)
{
    int n=0, ans=0, total=0;
    scanf("%d", &ans); //정답 하나 먼저 입력 받기
    
    do {
        scanf("%d", &n); // 맞힐 때까지 정수 입력 받기
        
        if (ans>n) { // if문을 통해 정답과 입력 받은 정수 사이의 크기를 비교, 정답이 입력 받은 정수보다 작을 때
            printf("%d<?\n",n, n);
            total+=1; //시도 횟수 카운트
        }
        else if (ans<n) { //정답이 입력 받은 정수보다 클 때
            printf("%d>?\n", n, n);
            total+=1; //시도 횟수 카운트
        }
        else {
            printf("%d==?\n", n,n); //정답과 입력 값이 같을 때
            total+=1; // 시도 횟수 카운트
            printf("%d",total, total);
            break;
        }
    } while(ans!=n); // 정답과 입력 받은 정수가 다를때 계속 반복, 같아지면 break
    

    return 0;
}
