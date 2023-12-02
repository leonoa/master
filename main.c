//main.c
#include <stdio.h>
#include "life.h"
int check()
{
globalA = 0;
return isLife();
}
int main() {
if (check()) {
printf("What is the meaning of life?\n");
}
}