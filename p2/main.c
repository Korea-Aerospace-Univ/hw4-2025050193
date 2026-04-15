#include <stdio.h>

int main(void) //main함수
{
    int N = 0, i = 0, count_int = 0, count_alp = 0, int_max = 0, alp_max = 0; // 변수 설정 및 0으로 초기화
    char ch; //문자열 설정
   
    scanf("%d", &N); //입력될 문자의 개수 N입력 받기
    
    for(i = 0; i < N; i+=1) //N번 문자열을 입력 받는 scanf를 반복하여 문자 N번, N개 입력 받기
    {
        scanf(" %c", &ch);  //문자 입력받기

        if(ch >= '0' && ch <= '9') //숫자 부분, 0부터 9까지의 숫자 일 경우의 if문
        {
            count_int++;      //숫자에 해당할 경우 숫자의 카운트를 세는 변수 count_int에+1을 헤서 카운트 진행.
            count_alp = 0;   //영어 변수 reset.

            if(count_int > int_max) //이전과 새로운 숫자 개수 비교
                int_max = count_int; //최대 숫자 개수 넣기
        }
        else if(ch >= 'a' && ch <= 'z') //알파벳 부분, a부터 z까지의 알파벳일 경우를 위한 else if
        {
            count_alp++;      // 알파벳에 해당할 경우 알파벳의 수를 카운트 하는 변수 count_alp에 +1해서 해당하는 만큼 카운트 늘리기.
            count_int = 0;    //숫자 카운트 했던것 reset

            if(count_alp > alp_max) //이전과 새로운 알파벳 개수 비교
                alp_max = count_alp; //최대 알파벳 개수 나온것 넣기
        }
    } 
  
    printf("%d \n", alp_max); //위에서 구한 최종 최대 알파벳 개수 출력
    printf("%d \n", int_max); //위에서 구한 최종 최대 숫자 개수 출력
    
    return 0;
}
