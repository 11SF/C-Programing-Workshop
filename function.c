#include <stdio.h>

void plus(int y, int z) {
	int sum;
	sum = y + z;
	printf("%d",sum);
}

void show() {
	printf("NakhonSi");
}

int main() {
	int a,b;
//	char str[10] = "NakhonSi";
	scanf("%d %d",&a,&b);
	
//	printf("%d",plus(a,b));
	plus(a,b);
	
//	show();
	return 0;
}


