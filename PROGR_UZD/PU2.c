#include<stdio.h>


void printBinary(char c)

{
printf("DEC - %d - BIN - ", c);
for (int i = 0; i < sizeof(c) * 8; i++) {
printf("%c", '0' + ((c & (1 << (7 - i))) > 0 ? 1 : 0));
}
printf("\n");
}

int main()

{
for (int i = 0; i < 120; i++) {
printBinary(i);
}

return 0;
}
