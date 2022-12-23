//sis kods apvieno visus ieprieksejos modulus, kas atrodas saja mapite

#include <stdio.h>
#include <stdlib.h>

void printHello();
void printNumber(int num);
int getRandomNumber();
int addNumbers(int num1, int num2);

int main()

{
printHello();
  printNumber(42);
int random = getRandomNumber();
printf("rrandom number: %d\n", random);
int result = addNumbers(3, 4);
printf("result: %d\n", result);
return 0;
}

void printHello() {
printf("Hello\n");
}

void printNumber(int num) 
{
printf("the number is %d\n", num);
}

int getRandomNumber() 

{
return rand();
}

int addNumbers(int num1, int num2) {
return num1 + num2;
}
