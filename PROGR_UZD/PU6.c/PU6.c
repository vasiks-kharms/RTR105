//USER DEFINED FUNCTION

//info avoti:
//https://www.youtube.com/watch?v=8KyZedtkEhk

#include <stdio.h>

//1. bez argumentiem un bez return
void function1()
{
printf("1. funkcija\n");
}

//2. ar argumentiem un bez return
void function2(int x, int y)
{
printf("2.funkcija ar argumentiem  x=%d un y=%d\n", x, y);
}

//3. bez argumentiem un ar return
int function3()
{
return 5;
}

//4.ar argumentiem un ar return
int function4(int x, int y)
{
return x + y;
}

//main, kur izsauc visas
int main()
{
function1();  //izsauc function1
function2(3, 4);  //izsauc function2 ar argumentiem 3 un 4
int result = function3(); // izsauc function3 un noglaba return vertibu ka result
printf("3. funkcijas rezultats ir: %d\n", result);
int sum = function4(5, 6);  //izsauc function4 ar argumentiem 5 un 6
printf("4. funkcijas rezultats ir: %d\n", sum);
return 0;
}
