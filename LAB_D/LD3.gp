set grid
set xrange [-10:10]
set yrange [-10:10]
set size ratio -1
set key right bottom
set title "atvasinajumi" 
plot "derivative.dat" using 1:3 w l lt 7 title "f(x)"
replot "derivative.dat" using 1:4 w l lt 6 title "f'(x) FD"
replot "derivative.dat" using 1:5 w l lt 4 title "f''(x)"
replot "derivative.dat" using 1:6 w l lt 2 title "f''(x) FD"
