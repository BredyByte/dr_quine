#include <stdio.h>
#include <stdlib.h>

int i = 5;

int main(void) {
	if (i < 0) return 0;
	char filename[32];
	sprintf(filename, "Sully_%d.c", i);
	FILE *fp = fopen(filename, "w");
	if (!fp) return 1;
	char *src = "#include <stdio.h>%c#include <stdlib.h>%c%cint i = %d;%c%cint main(void) {%c	if (i < 0) return 0;%c	char filename[32];%c	sprintf(filename, %cSully_%%d.c%c, i);%c	FILE *fp = fopen(filename, %cw%c);%c	if (!fp) return 1;%c	char *src = %c%s%c;%c	fprintf(fp, src, 10,10,10,i - 1,10,10,10,10,10,34,34,10,34,34,10,10,34,src,34,10,10,10,10,34,34,10,10,10,34,34,10,10,10);%c	fclose(fp);%c	char cmd[128];%c	sprintf(cmd,%cclang -Wall -Wextra -Werror %%s -o Sully_%%d%c,filename, i);%c	system(cmd);%c	char exec_cmd[64];%c	sprintf(exec_cmd, %c./Sully_%%d%c, i);%c	system(exec_cmd);%c	return 0;}%c";
	fprintf(fp, src, 10,10,10,i - 1,10,10,10,10,10,34,34,10,34,34,10,10,34,src,34,10,10,10,10,34,34,10,10,10,34,34,10,10,10);
	fclose(fp);
	char cmd[128];
	sprintf(cmd,"clang -Wall -Wextra -Werror %s -o Sully_%d",filename, i);
	system(cmd);
	char exec_cmd[64];
	sprintf(exec_cmd, "./Sully_%d", i);
	system(exec_cmd);
	return 0;}
