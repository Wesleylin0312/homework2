#include <stdio.h> 
#include <stdlib.h> 

int main() {

	int Y,M,D ;
	printf("請輸入你的出生年分:");
	scanf("%d",&Y);
	printf("請輸入你的出生月分:");
	scanf("%d",&M);
	printf("請輸入你的出生日期:");
	scanf("%d",&D);
	printf("你的出生年月日為: %d , %d , %d\n",Y,M,D);
	system("pause");
	return 0 ;
}
