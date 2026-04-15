#include <stdio.h>

int main(void)
{
    int N = 0, i = 0, count_int = 0, count_alp = 0, int_max = 0, alp_max = 0;
    char ch;
   
    scanf("%d", &N);
    
    for(i = 0; i < N; i++)
    {
        scanf("%c", &ch); 

        if(ch >= '0' && ch <= '9') 
        {
            count_int++;      
            count_alp = 0;   //영어 reset

            if(count_int > int_max) //이전과 새로운 알파벳 수 비교
                int_max = count_int; //최대 숫자 개수 넣기
        }
        else if(ch >= 'a' && ch <= 'z') 
        {
            count_alp++;      
            count_int = 0;    //숫자 reset

            if(count_alp > alp_max) //이전과 새로운 알파벳 수 비교
                alp_max = count_alp; //최대 알파벳 개수 넣기
        }
    } 

    printf("%d \n", alp_max); //최대 알파벳 개수 출력
    printf("%d \n", int_max); //최대 숫자 개수 출력
    
    return 0;
}
