//USER DEFINED FUNCTION

//info avoti:
//https://www.youtube.com/watch?v=8KyZedtkEhk

#include <stdio.h>

//bez argumentiem un bez return
void function1()
{
printf("Function 1 called\n");
}

//ar argumentiem un bez return
void function2(int x, int y)
{
printf("Function 2 called with x=%d and y=%d\n", x, y);
}

//bez argumentiem un ar return
int function3()
{
return 5;
}

//ar argumentiem un ar return
int function4(int x, int y)
{
return x + y;
}

int main()
{
function1();  //izsauc function1
function2(3, 4);  //izsauc function2 ar argumentiem 3 un 4
int result = function3(); // izsauc function3 un noglaba return vertibu 
 // Call function3 and store return value in result
printf("Result of function 3: %d\n", result);
int sum = function4(5, 6);  // Call function4 with arguments 5 and 6
printf("Result of function 4: %d\n", sum);
return 0;
}
