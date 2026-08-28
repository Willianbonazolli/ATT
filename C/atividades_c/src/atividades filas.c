#include <stdio.h>
#include <locale.h>

int main(void) {

    int p;
    p = 30;

push(p, 10); 

push(p, 20); 

push(p, 30); 

printf("%d\n", pop(p)); 

printf("%d\n", top(p)); 
    


    }
