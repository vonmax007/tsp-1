#include <cstdio>
#include "main.h"
#include <vector>

void print(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		printf("%d ", *it);
	}
	printf("\n");
}

int main() {
	int n;
	scanf("%d", &n);

	int **adjacencyMatrix = new int*[n];
	for (int i=0; i<n; i++) {
		adjacencyMatrix[i] = new int[n];
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%d", &adjacencyMatrix[i][j]);
			//printf("%d ", adjacencyMatrix[i][j]);
		}
		//printf("\n");
	}

	vector<int> result;

/*
	int bF = bruteForce(adjacencyMatrix, n, result);	
	print(result);
	printf("Brute Force: %d\n", bF);
*/

/*
	int nN = nearestNeighbour(adjacencyMatrix, n, result);
	print(result);
	printf("Nearest Neighbour: %d\n", nN);
*/


	int gA = GA(adjacencyMatrix, n, result);
	print(result);
	printf("Genetic Algorithm: %d\n", gA);
	
	return 0;
}
