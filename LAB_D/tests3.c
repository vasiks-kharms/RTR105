printf("Ievadi a vertibu: ");
scanf("%lf", &a);
printf("Ievadi b vertibu:");
scanf("%lf", &b);
printf("Ievadi precizitati: ");
scanf("%lf", &precision);

//izrekjina solju lielumu
double h = (b - a) * precision;

//rezultzz~
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot taisnstūru metodi) ir: %lf\n", rectangle_rule(a, b, h));
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot trapeču metodi) ir : %lf\n", trapezoidal_rule(a, b, h));
printf("Laukuma (starp f(x) un x ass) vērtība (aprēķins izmantojot Simpson's metodi) ir: %lf\n", simpson_rule(a, b, h));


return 0;

}


*/
