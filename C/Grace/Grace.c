#include <stdio.h>

// One Comment

#define FILE_NAME "Grace_kid.c"
#define SRC "#include <stdio.h>%c%c// One Comment%c%c#define FILE_NAME %cGrace_kid.c%c%c#define SRC %c%s%c%c#define WRITE_TO_FILE int main(void) { FILE *fp = fopen(FILE_NAME, %cw%c); if (!fp) return 1; fprintf(fp, SRC,10,10,10,10,34,34,10,34,SRC,34,10,34,34,10,10,10); fclose(fp); return 0;}%c%cWRITE_TO_FILE%c"
#define WRITE_TO_FILE int main(void) { FILE *fp = fopen(FILE_NAME, "w"); if (!fp) return 1; fprintf(fp, SRC,10,10,10,10,34,34,10,34,SRC,34,10,34,34,10,10,10); fclose(fp); return 0;}

WRITE_TO_FILE
