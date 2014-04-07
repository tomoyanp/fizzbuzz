#include<stdio.h>


int main(){
	int ary[100];
    int numbers = 0;
    printf("何回実行するか数字を入力してください。\n");
    scanf("%d",&numbers);
    printf("-----------------------------------------\n");
	int i;

	for (i = 1; i <= numbers; i++) {
		if (i%3 == 0 && i%5 == 0) {
			printf("FizzBuzz\n");
		}
        else if (i%3 == 0) {
			printf("Fizz\n");
		}
        else if (i%5==0) {
			printf("Buzz\n");
		}
        else {
			printf("%d\n",i);
		}
	}
	return 0;
}

