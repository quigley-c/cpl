// vim: set expandtab ts=2 sw=2:; 
#include <stdio.h>

void printFile(FILE*);

int main(int argc, char* argv[]) {
  if(argc != 2) {
    printf("usage: cpl <file>, got: %d\n", argc-1);
    return 1;
  }
 
  char* filename = argv[1];
  FILE* myfile = fopen(filename, "r"); 
  
  if (!myfile) {
    printf("file err: %s", filename);
    return 1;
  }

  printFile(myfile);

  printf("done.\n");
  return 0;
}

void printFile(FILE* f) {
  int c;
  while((c = fgetc(f)) != EOF)
    putchar(c);
}
