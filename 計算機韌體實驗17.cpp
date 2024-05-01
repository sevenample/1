#include <iostream>
using namespace std;

int main() {
	//cin.sync_with_stdio(false); cin.tie(nullptr);
	int number, buffer = 0, counts[32] = {};
	while (scanf("%d", &number) == 1)
		for (int i = 0, j = 1; j <= number && i < 32; i++, j <<= 1)
			if (number & j)
				counts[i]++;
	for (int i = 0, j = 1; i < 32; ++i, j <<= 1)
		if (counts[i] % 3)
			buffer |= j;
	printf("%d\n", buffer);
}
