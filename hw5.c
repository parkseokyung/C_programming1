//
// Created by 경s on 2022/10/11.
//

#include <stdio.h>

int solve_bin(int num)
{
    if (num > 1) // 1, 0 은 2로 나눌 필요가 없음
    {
        solve_bin(num / 2); // 2로 나눈 몫으로 2진수 구하기
    }
    printf("%d", num % 2); // 2로 나눈 나머지 출력
}

int main(void)
{
    unsigned int enter;
    printf("Please enter a number: ");
    scanf("%d",&enter);

    solve_bin(enter);

    return 0;
}
