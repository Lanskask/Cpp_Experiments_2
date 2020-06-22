# GProf Test 


```shell script
gcc -pg -o TestGprof TestGprof.c
./TestGprof
gprof -b TestGprof gmon.out > analysis.out

#Suppress printing statically declared functions with -a option
gprof -b -a TestGprof gmon.out > analysis.out
#Print only flat profile using -p option
gprof -b -p TestGprof
#Print info related to specific function
gprof -b -pStaticFunc TestGprof
#Suppress printing of flat profile using -P option
gprof -b -P TestGprof
#Print only call graph using -q option
gprof -b -q TestGprof
#Suppress printing of call graph using -Q option
gprof -b -Q TestGprof
```
