#include <stdio.h>

int addTwoInts(int x1, int x2) {
	return x1 + x2;
}

int main() {
	int result = addTwoInts(2, 3);
	printf("%d\n", result);
	return 0;
}

