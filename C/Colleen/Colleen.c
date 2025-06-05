#include <stdio.h>

int main(void){
char *f="#include%c<stdio.h>%c%cint%cmain(void){%cchar%c*f=%c%s%c;%cprintf(f,32,10,10,32,10,32,34,f,34,10,10,32,10,10);%creturn%c0;%c}%c";
printf(f,32,10,10,32,10,32,34,f,34,10,10,32,10,10);
return 0;
}
