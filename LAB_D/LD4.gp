

set xrange [0:2]
set yrange [0:1]
set xlabel "x"
set ylabel "y"

f(x) = exp(-x)

set style fill transparent solid 0.5 noborder
plot f(x) with filledcurves x1, x with lines lw 2
