//statistics
//gnuplot pic - https://github.com/vasiks-kharms/RTR105/blob/main/LAB_D/Screenshot%20from%202023-01-20%2022-48-53.png
//gnuplot code - https://github.com/vasiks-kharms/RTR105/blob/main/LAB_D/LD5.gp


//info avoti:
//https://estudijas.rtu.lv/file.php/252149/RTR105_2019_2020_L22_20200118_14_51.pdf
//https://www.ecowin.org/ascii.htm
//https://www.geeksforgeeks.org/bubble-sort/
//https://www.geeksforgeeks.org/program-for-mean-and-median-of-an-unsorted-array/
//vel es skatijos kada kursabiedra darbu githubaa, lai saprastu, ko attelot taja histogramma, bet es vairs nevaru atrast, kurs tas bija


#include <stdio.h>
#include <stdlib.h>

void printArray(char*, int);
void printASCII(char*, int);
void bubbleSort(char*, int);
void min(char*, int);
void max(char*, int);
void avg(char*, int);
void median(char*, int);
void mode(char*, int);

int main()
{
//mainigie kuros glabas inputus
char ch;
char data[100];
int size = 0;



printf("Ievadi simbolus (ar atstarpem)");

//nolasit inputus un noglabat data array
while ((ch = getchar()) != '\n')
{
//saglabat tikai tos simbolus kas nav atstarpes
if (ch != ' ')
 {
 data[size] = ch;
 size++;
 }
}
 

//pievieno \0 lai signalizetu ka beidzas virkne lai printf zina kad jabeidz proceset virkne
data[size] = '\0';

printf("Virkne, ko ievadiji: %s\n", data);

//bubble sort
bubbleSort(data, size);


printf("Augosa seciba:\n");
printArray(data, size);
printASCII(data, size);
min(data, size);
max(data, size);
avg(data, size);
median(data, size);
mode(data, size);

return 0;
}


void printArray(char array[], int size)
{
for (int i = 0; i < size; i++)
 {
 printf("%c ", array[i]);
 }
printf("\n");
}

//funkcija kas izvada ASCII vertibas
void printASCII(char array[], int size)
{
for (int i = 0; i < size; i++)
{
printf("%d ", (int)array[i]);
}
printf("\n");
}

//bubble sort
void bubbleSort(char array[], int size)
{ for (int i = 0; i < size-1; i++)
{
for (int j = 0; j < size-i-1; j++)
{
if (array[j] > array[j+1])
{
char temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;
}
}
}

}

//min
void min(char array[], int size)
{
char min = array[0];

for (int i = 1; i < size; i++)
{
if (array[i] < min)
{
min = array[i];
}

}
printf("Mazaka vertiba (saskana ar ASCII values) ir : %c (%d)\n", min, (int)min);
}

//max
void max(char array[], int size)
{
char max = array[0];
 for (int i = 1; i < size; i++)
{
 if (array[i] > max)
{
max = array[i];
}


}
printf("Lielaka vertiba (saskana ar ASCII values) ir: %c (%d)\n", max, (int)max);
}

//average
void avg(char array[], int size)
{

double avg = 0;
for(int i = 0; i < size; ++i)
{
avg = avg + (double)array[i];
}
avg = avg/(size);
printf("Videja vertiba (saskana ar ASCII values) ir:  %c (%f)\n", (char)avg, avg);
}

//MEDIANA ir if-else jo var but gan para gan nepara skaits ar simboliem virkne
void median(char array[], int size)
{
float median;
if(size % 2 > 0)
{
median = array[(size-1)/2];
printf("Mediana: %c (%f)\n", (char)median, median);
}
else
{
median = (array[(size-1)/2]+array[(size+1)/2])/2;
printf("Mediana: %c (%f)\n", (char)median, median);
}
}

//moda
void mode(char array[], int size)
{
int str[255] = {0};
int i, j, k, max, index;




//cik reizes paradas katrs simbols
for(i = 0; i < size; i++)
{
 ++str[array[i]];
}

//kurs visvairak paradas
max = str[0];
index = 0;

for(i = 0; i < size; i++)
{
 if( str[array[i]] > max)
{
max = str[array[i]];
 index = i;
}
}

printf("Moda: %c (%d)\n", array[index], (int)array[index]);

//ieraksta failaa
char filename[] = "freq.dat";
FILE *fp = fopen(filename, "w");
if (fp == NULL)

//errors -
{
printf("Nevareja atvert failu %s", filename);
}
else
{
//nonem tos kas dubultojas
//https://www.geeksforgeeks.org/remove-duplicates-sorted-array/ 
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
 {
if (array[i] == array[j])
{
for (k = j; k < size; k++)
{
array[k] = array[k + 1];
}
size--;
j--;
}
}
}


for(i=0; i < size; i++)
{
fprintf(fp, "%c\t%d\n", array[i], str[array[i]]);
}
fclose(fp);


}

}
