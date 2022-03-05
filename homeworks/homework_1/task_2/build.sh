#! task_2/
#Run this terminal
#+ Command to compile c++ program

#Compile modules
c++ -std=c++17 -c -Idir/ src/sum.cpp -o build/sum.o
c++ -std=c++17 -c -Idir/ src/subtract.cpp -o build/subtract.cpp

#Organize modules into libraries
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o
ar rcs results/lib/libipb_arithmetic.a build/sum.o build/subtract.o

#Compile main application
c++ -std=c++17 -c -I/dir src/main.cpp -o build/main.o

#Link main application to libraries
c++ -std=c++17 build/main.o -L build/ -lipb_arithmetic -o build/main
c++ -std=c++17 build/main.o -L results/lib/ -lipb_arithmetic -o results/bin/main

#Run the application
build/main
results/bin/main
