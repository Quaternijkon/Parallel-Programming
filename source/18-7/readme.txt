1. compile:
mpicc svd.c -o svd -lm

2. run:
mpirun -np 4 svd

3. result:
Input of file "dataIn.txt"
4        4
1.000000        2.000000        1.000000        3.000000
3.000000        3.000000        2.000000        4.000000
4.000000        3.000000        1.000000        5.000000
1.000000        2.000000        3.000000        6.000000
.........U.........
0.317376        0.080451        -0.148870       0.933078
0.505353        -0.262465       -0.775378       -0.272974
0.576766        -0.566120       0.586480        -0.053801
0.557881        0.777269        0.180742        -0.227938
........E.........
12.023929       2.864073        0.895145        0.648793
........Vt........
0.390753        0.415578        0.297614        0.765528
-0.766096       -0.268959       0.461304        0.357709
0.057672        -0.561903       -0.637823       0.523566
-0.507033       0.662738        -0.540190       0.109041

Iteration num = 4
Whole running time    = 0.000000 seconds
Distribute data time  = 0.000000 seconds
Parallel compute time = 0.000000 seconds
