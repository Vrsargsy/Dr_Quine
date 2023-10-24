#include <stdio.h>

#define START int main(void) {FILE *fs = fopen(KIDNAME, "w"); if(!fs) return (-1); fprintf(fs, SRC, 10, 34, SRC); fclose(fs); return(0);}
#define KIDNAME "Grace_kid.c"
#define SRC "#include <stdio.h>%1$c%1$c#define START int main(void) {FILE *fs = fopen(KIDNAME, %2$cw%2$c); if(!fs) return (-1); fprintf(fs, SRC, 10, 34, SRC); fclose(fs); return(0);}%1$c#define KIDNAME %2$cGrace_kid.c%2$c%1$c#define SRC %2$c%3$s%2$c%1$c/*%1$cFirst%1$c*/%1$cSTART"
/*
First
*/
START