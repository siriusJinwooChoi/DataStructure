// 2. ��������
/*
#include <stdio.h>
#include <stdlib.h>

void printArray(int value[], int count) {
	int i = 0;
	for(i = 0; i < count; i++) {
		printf("%d ", value[i]);
	}
	printf("\n");
}

void bubbleSort(int value[], int count) {
	int i=0, j=0, temp=0;

	for(i=count-1; i >= 0; i--) {
		for(j=0; j <= i; j++) {				// i ������ �� ������ �� �ڷ���� �����ְ� �ǹǷ�, j <= i �� �ȴ�.
			if(value[j-1] > value[j]) {
				temp = value[j-1];
				value[j-1] = value[j];
				value[j] = temp;
			}
		}
		printf("Step-%d, ", count-i);
		printArray(value, count);
	}
}

int main(int argc, char *argv[]) {
	int values[] = {80, 50, 70, 10, 60, 20, 40, 30};

	printf("Before BubbleSort\n");
	printArray(values, 8);

	printf("\nAfter Sort\n");
	bubbleSort(values, 8);
	//printArray(values, 8);

	return 0;
}
*/