/*
과제0) 정수 하나를 입력받아 1부터 입력받은 정수까지의 합을 출력하라.
예를 들어 5가 입력되었으면 1 ~ 5까지의 합인 15를, 10이 입력되면 1 ~ 10까지의 합인 55를 출력한다.
(아래 지시대로 divide and conquer를 통해 문제를 해결하시오)
*/

#include <stdio.h>

int main()
{
	int sum = 0, input = 0;			//sum 입력된 변수의 합 저장, input 사용자로 부터 입력 받는 값 저장.
	int count = 0;					//for문에서 횟수를 카운트할때 쓸 변수

	printf("구하고자 하는 합의 범위 값을 입력하시오 \n ex) 5입력시 1~5까지의 합인 15,10입력시 55를 출력");
	
	scanf("%d", &input);				//입력함수를 통해 사용자로부터 값을 입력받음
	fflush(stdin);

	for (count = 0; count <= input; count++) {
		sum += count;
	}

	printf("사용자로 부터 입력 받은 값 : %d  \n합 결과 : %d \n", input, sum);

	return 0;
}