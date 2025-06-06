#include <stdio.h>
#include <stdlib.h>

int i = 5;

int main(void) {
	char filename[32];
	sprintf(filename, "Sully_%d.c", i - 1);
	FILE *fp = fopen(filename, "w");
	if (!fp) return 1;
	char *src = "#include <stdio.h>%c#include <stdlib.h>%c%cint i = %d;%c%cint main(void) {%c	char filename[32];%c	sprintf(filename, %cSully_%%d.c%c, i - 1);%c	FILE *fp = fopen(filename, %cw%c);%c	if (!fp) return 1;%c	char *src = %c%s%c;%c	fprintf(fp, src, 10,10,10,i - 1,10,10,10,10,34,34,10,34,34,10,10,34,src,34,10,10,10,10,34,34,10,10,10,10);%c	fclose(fp);%c	char cmd[128];%c	sprintf(cmd,%cclang -Wall -Wextra -Werror %%s -o Sully_%%d%c,filename, i - 1);%c	system(cmd);%c	return 0;%c}%c";
	fprintf(fp, src, 10,10,10,i - 1,10,10,10,10,34,34,10,34,34,10,10,34,src,34,10,10,10,10,34,34,10,10,10,10);
	fclose(fp);
	char cmd[128];
	sprintf(cmd,"clang -Wall -Wextra -Werror %s -o Sully_%d",filename, i - 1);
	system(cmd);
	return 0;
}
