


## Score: 90/90 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor circle.cpp -o .objs/circle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor flower.cpp -o .objs/flower.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor line.cpp -o .objs/line.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor rectangle.cpp -o .objs/rectangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor shape.cpp -o .objs/shape.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor triangle.cpp -o .objs/triangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor truck.cpp -o .objs/truck.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor vector2.cpp -o .objs/vector2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/circle.o .objs/flower.o .objs/line.o .objs/rectangle.o .objs/shape.o .objs/triangle.o .objs/truck.o .objs/vector2.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_virtual_perim

- **Points**: 10 / 10





### ✓ - [10/10] - test_virtual_area

- **Points**: 10 / 10





### ✓ - [20/20] - test_destructor

- **Points**: 20 / 20

```
==22787== Memcheck, a memory error detector
==22787== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22787== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22787== Command: ./test -r xml "test_destructor"
==22787== 
==22787== 
==22787== HEAP SUMMARY:
==22787==     in use at exit: 0 bytes in 0 blocks
==22787==   total heap usage: 1,667 allocs, 1,667 frees, 216,576 bytes allocated
==22787== 
==22787== All heap blocks were freed -- no leaks are possible
==22787== 
==22787== For counts of detected and suppressed errors, rerun with: -v
==22787== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_destructor" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="92">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_constructor

- **Points**: 20 / 20





### ✓ - [10/10] - test_pure_virtual

- **Points**: 10 / 10

```
==22792== Memcheck, a memory error detector
==22792== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22792== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22792== Command: ./test -r xml "test_pure_virtual"
==22792== 
==22792== 
==22792== HEAP SUMMARY:
==22792==     in use at exit: 0 bytes in 0 blocks
==22792==   total heap usage: 1,728 allocs, 1,728 frees, 1,757,183 bytes allocated
==22792== 
==22792== All heap blocks were freed -- no leaks are possible
==22792== 
==22792== For counts of detected and suppressed errors, rerun with: -v
==22792== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_pure_virtual" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_slicing

- **Points**: 20 / 20

```
==22799== Memcheck, a memory error detector
==22799== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==22799== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==22799== Command: ./test -r xml "test_slicing"
==22799== 
==22799== 
==22799== HEAP SUMMARY:
==22799==     in use at exit: 0 bytes in 0 blocks
==22799==   total heap usage: 1,794 allocs, 1,794 frees, 1,759,556 bytes allocated
==22799== 
==22799== All heap blocks were freed -- no leaks are possible
==22799== 
==22799== For counts of detected and suppressed errors, rerun with: -v
==22799== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_slicing" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="125">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **b47854980175299ee8c02446961bfac5b5aa9d08** (from **February 16th 2020, 11:59:59 pm**)
