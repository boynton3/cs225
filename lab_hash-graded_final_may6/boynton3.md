


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==29488== Memcheck, a memory error detector
==29488== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29488== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29488== Command: ./test -r xml "DH::testRemoveEASY"
==29488== 
==29488== 
==29488== HEAP SUMMARY:
==29488==     in use at exit: 0 bytes in 0 blocks
==29488==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==29488== 
==29488== All heap blocks were freed -- no leaks are possible
==29488== 
==29488== For lists of detected and suppressed errors, rerun with: -s
==29488== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==29492== Memcheck, a memory error detector
==29492== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29492== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29492== Command: ./test -r xml "DH::testRemoveHard"
==29492== 
==29492== 
==29492== HEAP SUMMARY:
==29492==     in use at exit: 0 bytes in 0 blocks
==29492==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==29492== 
==29492== All heap blocks were freed -- no leaks are possible
==29492== 
==29492== For lists of detected and suppressed errors, rerun with: -s
==29492== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==29495== Memcheck, a memory error detector
==29495== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29495== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29495== Command: ./test -r xml "DH::testResizeOnce"
==29495== 
==29495== 
==29495== HEAP SUMMARY:
==29495==     in use at exit: 0 bytes in 0 blocks
==29495==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==29495== 
==29495== All heap blocks were freed -- no leaks are possible
==29495== 
==29495== For lists of detected and suppressed errors, rerun with: -s
==29495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==29499== Memcheck, a memory error detector
==29499== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29499== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29499== Command: ./test -r xml "DH::testResizeAll"
==29499== 
==29499== 
==29499== HEAP SUMMARY:
==29499==     in use at exit: 0 bytes in 0 blocks
==29499==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==29499== 
==29499== All heap blocks were freed -- no leaks are possible
==29499== 
==29499== For lists of detected and suppressed errors, rerun with: -s
==29499== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==29507== Memcheck, a memory error detector
==29507== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29507== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29507== Command: ./test -r xml "DH::testInsertEasy"
==29507== 
==29507== 
==29507== HEAP SUMMARY:
==29507==     in use at exit: 0 bytes in 0 blocks
==29507==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==29507== 
==29507== All heap blocks were freed -- no leaks are possible
==29507== 
==29507== For lists of detected and suppressed errors, rerun with: -s
==29507== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==29510== Memcheck, a memory error detector
==29510== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29510== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29510== Command: ./test -r xml "DH::testInsertHard"
==29510== 
==29510== 
==29510== HEAP SUMMARY:
==29510==     in use at exit: 0 bytes in 0 blocks
==29510==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==29510== 
==29510== All heap blocks were freed -- no leaks are possible
==29510== 
==29510== For lists of detected and suppressed errors, rerun with: -s
==29510== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==29513== Memcheck, a memory error detector
==29513== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29513== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29513== Command: ./test -r xml "SC::testRemoveEASY"
==29513== 
==29513== 
==29513== HEAP SUMMARY:
==29513==     in use at exit: 0 bytes in 0 blocks
==29513==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==29513== 
==29513== All heap blocks were freed -- no leaks are possible
==29513== 
==29513== For lists of detected and suppressed errors, rerun with: -s
==29513== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==29516== Memcheck, a memory error detector
==29516== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29516== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29516== Command: ./test -r xml "SC::testRemoveHard"
==29516== 
==29516== 
==29516== HEAP SUMMARY:
==29516==     in use at exit: 0 bytes in 0 blocks
==29516==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==29516== 
==29516== All heap blocks were freed -- no leaks are possible
==29516== 
==29516== For lists of detected and suppressed errors, rerun with: -s
==29516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==29519== Memcheck, a memory error detector
==29519== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29519== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29519== Command: ./test -r xml "SC::testResizeOnce"
==29519== 
==29519== 
==29519== HEAP SUMMARY:
==29519==     in use at exit: 0 bytes in 0 blocks
==29519==   total heap usage: 2,009 allocs, 2,009 frees, 249,760 bytes allocated
==29519== 
==29519== All heap blocks were freed -- no leaks are possible
==29519== 
==29519== For lists of detected and suppressed errors, rerun with: -s
==29519== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==29522== Memcheck, a memory error detector
==29522== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29522== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29522== Command: ./test -r xml "SC::testResizeAll"
==29522== 
==29522== 
==29522== HEAP SUMMARY:
==29522==     in use at exit: 0 bytes in 0 blocks
==29522==   total heap usage: 1,908 allocs, 1,908 frees, 242,944 bytes allocated
==29522== 
==29522== All heap blocks were freed -- no leaks are possible
==29522== 
==29522== For lists of detected and suppressed errors, rerun with: -s
==29522== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==29525== Memcheck, a memory error detector
==29525== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29525== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29525== Command: ./test -r xml "SC::testInsertEasy"
==29525== 
==29525== 
==29525== HEAP SUMMARY:
==29525==     in use at exit: 0 bytes in 0 blocks
==29525==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==29525== 
==29525== All heap blocks were freed -- no leaks are possible
==29525== 
==29525== For lists of detected and suppressed errors, rerun with: -s
==29525== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==29528== Memcheck, a memory error detector
==29528== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29528== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29528== Command: ./test -r xml "SC::testInsertHard"
==29528== 
==29528== 
==29528== HEAP SUMMARY:
==29528==     in use at exit: 0 bytes in 0 blocks
==29528==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==29528== 
==29528== All heap blocks were freed -- no leaks are possible
==29528== 
==29528== For lists of detected and suppressed errors, rerun with: -s
==29528== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==29531== Memcheck, a memory error detector
==29531== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29531== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29531== Command: ./test -r xml "LP::testRemoveEASY"
==29531== 
==29531== 
==29531== HEAP SUMMARY:
==29531==     in use at exit: 0 bytes in 0 blocks
==29531==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==29531== 
==29531== All heap blocks were freed -- no leaks are possible
==29531== 
==29531== For lists of detected and suppressed errors, rerun with: -s
==29531== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==29534== Memcheck, a memory error detector
==29534== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29534== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29534== Command: ./test -r xml "LP::testRemoveHard"
==29534== 
==29534== 
==29534== HEAP SUMMARY:
==29534==     in use at exit: 0 bytes in 0 blocks
==29534==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==29534== 
==29534== All heap blocks were freed -- no leaks are possible
==29534== 
==29534== For lists of detected and suppressed errors, rerun with: -s
==29534== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==29537== Memcheck, a memory error detector
==29537== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29537== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29537== Command: ./test -r xml "LP::testResizeOnce"
==29537== 
==29537== 
==29537== HEAP SUMMARY:
==29537==     in use at exit: 0 bytes in 0 blocks
==29537==   total heap usage: 1,976 allocs, 1,976 frees, 245,261 bytes allocated
==29537== 
==29537== All heap blocks were freed -- no leaks are possible
==29537== 
==29537== For lists of detected and suppressed errors, rerun with: -s
==29537== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==29540== Memcheck, a memory error detector
==29540== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29540== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29540== Command: ./test -r xml "LP::testResizeAll"
==29540== 
==29540== 
==29540== HEAP SUMMARY:
==29540==     in use at exit: 0 bytes in 0 blocks
==29540==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==29540== 
==29540== All heap blocks were freed -- no leaks are possible
==29540== 
==29540== For lists of detected and suppressed errors, rerun with: -s
==29540== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==29543== Memcheck, a memory error detector
==29543== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29543== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29543== Command: ./test -r xml "LP::testInsertEasy"
==29543== 
==29543== 
==29543== HEAP SUMMARY:
==29543==     in use at exit: 0 bytes in 0 blocks
==29543==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==29543== 
==29543== All heap blocks were freed -- no leaks are possible
==29543== 
==29543== For lists of detected and suppressed errors, rerun with: -s
==29543== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==29547== Memcheck, a memory error detector
==29547== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29547== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==29547== Command: ./test -r xml "LP::testInsertHard"
==29547== 
==29547== 
==29547== HEAP SUMMARY:
==29547==     in use at exit: 0 bytes in 0 blocks
==29547==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==29547== 
==29547== All heap blocks were freed -- no leaks are possible
==29547== 
==29547== For lists of detected and suppressed errors, rerun with: -s
==29547== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **b4e8197f6d4ee6b23dbe3ee9c15030f8e8234c28** (from **May 6th 2020, 11:59:59 pm**)
