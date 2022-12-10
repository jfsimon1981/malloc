#include <stdlib.h>
#include <stdio.h>
// #include ""

int main(int argc, char **argv)
{
  const int alloc_num = 5'000'000;
  const int string_size = 1'500'000;

  printf("Entered main program ... ");
  for (int i = 0; i < alloc_num; i++) {
    char *ps = 0;
    ps = (char*) malloc (sizeof(char) * string_size);
    free(ps);
  }
  printf("Done.\n");
	return 0;
}
