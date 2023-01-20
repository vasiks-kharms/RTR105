set yrange [0:10]
set title "Biezhuma histogramma"
set ylabel "Biezhums"
set xlabel "Simbols"
set style data histograms
plot 'freq.dat' using 2:xtic(1)
