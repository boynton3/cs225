


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==25881== Memcheck, a memory error detector
==25881== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25881== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==25881== Command: ./test -r xml "test_find"
==25881== 
==25881== 
==25881== HEAP SUMMARY:
==25881==     in use at exit: 0 bytes in 0 blocks
==25881==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==25881== 
==25881== All heap blocks were freed -- no leaks are possible
==25881== 
==25881== For lists of detected and suppressed errors, rerun with: -s
==25881== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==25886== Memcheck, a memory error detector
==25886== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25886== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==25886== Command: ./test -r xml "test_insert_big"
==25886== 
==25886== 
==25886== HEAP SUMMARY:
==25886==     in use at exit: 0 bytes in 0 blocks
==25886==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==25886== 
==25886== All heap blocks were freed -- no leaks are possible
==25886== 
==25886== For lists of detected and suppressed errors, rerun with: -s
==25886== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==25890== Memcheck, a memory error detector
==25890== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25890== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==25890== Command: ./test -r xml "test_remove_big"
==25890== 
==25890== 
==25890== HEAP SUMMARY:
==25890==     in use at exit: 0 bytes in 0 blocks
==25890==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==25890== 
==25890== All heap blocks were freed -- no leaks are possible
==25890== 
==25890== For lists of detected and suppressed errors, rerun with: -s
==25890== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **b4e8197f6d4ee6b23dbe3ee9c15030f8e8234c28** (from **May 6th 2020, 11:59:59 pm**)
