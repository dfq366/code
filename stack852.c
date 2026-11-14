#include <stdio.h>

int main(void)
{
	int n;

	while (scanf("%d", &n) == 1) {
		int wanted[10];
		int stack[10];
		int top = -1;
		int next_input = 1;
		int possible = 1;

		if (n < 0 || n >= 10)
			return 0;

		for (int i = 0; i < n; ++i) {
			if (scanf("%d", &wanted[i]) != 1)
				return 0;
		}

		for (int i = 0; i < n; ++i) {
			while (next_input <= n &&
				   (top == -1 || stack[top] != wanted[i])) {
				stack[++top] = next_input++;
			}

			if (top == -1 || stack[top] != wanted[i]) {
				possible = 0;
				break;
			}
			--top;
		}

		puts(possible ? "yes" : "no");
	}

	return 0;
}
