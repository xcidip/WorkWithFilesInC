#include <stdio.h>
#include <string.h>

int main() {
  printf("Reading csv from a text file\n");
  char csv[100][100];

  // open text file
  FILE *fptr = fopen("input.txt", "r");
  if (fptr == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  // get text from file
  char buffer[100]; // Allocate a buffer to store the line
  // Read line by line using fgets
  int i = 0;
  while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
    strcpy(csv[i], buffer);
    i++;
  }

  // close text file
  fclose(fptr);

  // reading everything from a 2D char array
  for (int j = 0; j <= i; j++) {
    printf("%s", csv[j]);
  }

  return 0;
}
