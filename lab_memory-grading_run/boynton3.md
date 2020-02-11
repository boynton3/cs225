


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==44347== Memcheck, a memory error detector
==44347== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44347== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44347== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==44347== 
==44347== 
==44347== HEAP SUMMARY:
==44347==     in use at exit: 0 bytes in 0 blocks
==44347==   total heap usage: 2,492 allocs, 2,492 frees, 278,680 bytes allocated
==44347== 
==44347== All heap blocks were freed -- no leaks are possible
==44347== 
==44347== For counts of detected and suppressed errors, rerun with: -v
==44347== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==44392== Memcheck, a memory error detector
==44392== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44392== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44392== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==44392== 
==44392== 
==44392== HEAP SUMMARY:
==44392==     in use at exit: 0 bytes in 0 blocks
==44392==   total heap usage: 2,492 allocs, 2,492 frees, 276,488 bytes allocated
==44392== 
==44392== All heap blocks were freed -- no leaks are possible
==44392== 
==44392== For counts of detected and suppressed errors, rerun with: -v
==44392== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==44401== Memcheck, a memory error detector
==44401== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44401== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44401== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==44401== 
==44401== 
==44401== HEAP SUMMARY:
==44401==     in use at exit: 0 bytes in 0 blocks
==44401==   total heap usage: 2,496 allocs, 2,496 frees, 277,208 bytes allocated
==44401== 
==44401== All heap blocks were freed -- no leaks are possible
==44401== 
==44401== For counts of detected and suppressed errors, rerun with: -v
==44401== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="25">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **boynton3** using **aa287b4d6857113613dc8e2569c033c4567d2b5d** (from **February 10th 2020, 12:00:00 am**)
