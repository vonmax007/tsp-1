#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

const int max_d = 100;

int main() {
	srand(time(0));

	int n;
	scanf("%d", &n);

	printf("%d\n", n);

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%d  ", (int)((double)rand()/RAND_MAX*max_d));
		}
		printf("\n");
	}

	return 0;
}
