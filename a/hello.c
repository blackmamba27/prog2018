#include <stdio.h>

int main(void)
{
	int r;
		printf("半径を入力してください。：");
	scanf_s("%d",&r);
	printf("入力した半径の円の面積は %f です。（円周率は3.14で計算）\n",r * r * 3.14);
	
		return 0;
}