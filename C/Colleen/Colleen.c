// Some outside comment
#include <stdio.h>

void another_function(void){}

int main(void){
	// Some inside comment
	another_function();
	char *f="// Some outside comment%c#include <stdio.h>%c%cvoid another_function(void){}%c%cint%cmain(void){%c	// Some inside comment%c	another_function();%c	char *f=%c%s%c;%c	printf(f,10,10,10,10,10,32,10,10,10,34,f,34,10,10,32,10,10);%c	return%c0;%c}%c";
	printf(f,10,10,10,10,10,32,10,10,10,34,f,34,10,10,32,10,10);
	return 0;
}
