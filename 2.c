#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Wrong number of arguments. Input two arguments.\n");
		return 1;
	}

	int size = atoi(argv[1]);
	char *word = argv[2];
	int max_length = strlen(word) + 5;

	char **array = (char **)malloc(size * sizeof(char *));
	if (array == NULL) {
		printf("Memory allocation has not been successful.\n");
		return 1;
	}

	for (int i = 0; i < size; i++) {
		array[i] = (char *)malloc(max_length * sizeof(char));
		if (array[i] == NULL) {
			printf("Memory allocation has not been successful.\n");
			return 1;
		}

		strcpy(array[i], word);
		char count[13];
		sprintf(count, " %d", i + 1);
		strcat(array[i], count);
	}

	for (int i = 0; i < size; i++) {
		printf("%s\n", array[i]);
		free(array[i]);
	}

	free(array);
	return 0;
}
