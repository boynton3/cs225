


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
==9730== Memcheck, a memory error detector
==9730== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9730== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9730== Command: ./test -r xml "DH::testRemoveEASY"
==9730== 
==9730== 
==9730== HEAP SUMMARY:
==9730==     in use at exit: 0 bytes in 0 blocks
==9730==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==9730== 
==9730== All heap blocks were freed -- no leaks are possible
==9730== 
==9730== For counts of detected and suppressed errors, rerun with: -v
==9730== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9733== Memcheck, a memory error detector
==9733== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9733== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9733== Command: ./test -r xml "DH::testRemoveHard"
==9733== 
==9733== 
==9733== HEAP SUMMARY:
==9733==     in use at exit: 0 bytes in 0 blocks
==9733==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==9733== 
==9733== All heap blocks were freed -- no leaks are possible
==9733== 
==9733== For counts of detected and suppressed errors, rerun with: -v
==9733== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9737== Memcheck, a memory error detector
==9737== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9737== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9737== Command: ./test -r xml "DH::testResizeOnce"
==9737== 
==9737== 
==9737== HEAP SUMMARY:
==9737==     in use at exit: 0 bytes in 0 blocks
==9737==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==9737== 
==9737== All heap blocks were freed -- no leaks are possible
==9737== 
==9737== For counts of detected and suppressed errors, rerun with: -v
==9737== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9740== Memcheck, a memory error detector
==9740== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9740== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9740== Command: ./test -r xml "DH::testResizeAll"
==9740== 
==9740== 
==9740== HEAP SUMMARY:
==9740==     in use at exit: 0 bytes in 0 blocks
==9740==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==9740== 
==9740== All heap blocks were freed -- no leaks are possible
==9740== 
==9740== For counts of detected and suppressed errors, rerun with: -v
==9740== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9755== Memcheck, a memory error detector
==9755== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9755== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9755== Command: ./test -r xml "DH::testInsertEasy"
==9755== 
==9755== 
==9755== HEAP SUMMARY:
==9755==     in use at exit: 0 bytes in 0 blocks
==9755==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==9755== 
==9755== All heap blocks were freed -- no leaks are possible
==9755== 
==9755== For counts of detected and suppressed errors, rerun with: -v
==9755== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9760== Memcheck, a memory error detector
==9760== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9760== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9760== Command: ./test -r xml "DH::testInsertHard"
==9760== 
==9760== 
==9760== HEAP SUMMARY:
==9760==     in use at exit: 0 bytes in 0 blocks
==9760==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==9760== 
==9760== All heap blocks were freed -- no leaks are possible
==9760== 
==9760== For counts of detected and suppressed errors, rerun with: -v
==9760== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9788== Memcheck, a memory error detector
==9788== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9788== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9788== Command: ./test -r xml "SC::testRemoveEASY"
==9788== 
==9788== 
==9788== HEAP SUMMARY:
==9788==     in use at exit: 0 bytes in 0 blocks
==9788==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==9788== 
==9788== All heap blocks were freed -- no leaks are possible
==9788== 
==9788== For counts of detected and suppressed errors, rerun with: -v
==9788== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9799== Memcheck, a memory error detector
==9799== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9799== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9799== Command: ./test -r xml "SC::testRemoveHard"
==9799== 
==9799== 
==9799== HEAP SUMMARY:
==9799==     in use at exit: 0 bytes in 0 blocks
==9799==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==9799== 
==9799== All heap blocks were freed -- no leaks are possible
==9799== 
==9799== For counts of detected and suppressed errors, rerun with: -v
==9799== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9811== Memcheck, a memory error detector
==9811== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9811== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9811== Command: ./test -r xml "SC::testResizeOnce"
==9811== 
==9811== 
==9811== HEAP SUMMARY:
==9811==     in use at exit: 0 bytes in 0 blocks
==9811==   total heap usage: 2,009 allocs, 2,009 frees, 249,760 bytes allocated
==9811== 
==9811== All heap blocks were freed -- no leaks are possible
==9811== 
==9811== For counts of detected and suppressed errors, rerun with: -v
==9811== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==9827== Memcheck, a memory error detector
==9827== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9827== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9827== Command: ./test -r xml "SC::testResizeAll"
==9827== 
==9827== 
==9827== HEAP SUMMARY:
==9827==     in use at exit: 0 bytes in 0 blocks
==9827==   total heap usage: 1,908 allocs, 1,908 frees, 242,944 bytes allocated
==9827== 
==9827== All heap blocks were freed -- no leaks are possible
==9827== 
==9827== For counts of detected and suppressed errors, rerun with: -v
==9827== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10281== Memcheck, a memory error detector
==10281== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10281== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10281== Command: ./test -r xml "SC::testInsertEasy"
==10281== 
==10281== 
==10281== HEAP SUMMARY:
==10281==     in use at exit: 0 bytes in 0 blocks
==10281==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==10281== 
==10281== All heap blocks were freed -- no leaks are possible
==10281== 
==10281== For counts of detected and suppressed errors, rerun with: -v
==10281== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10543== Memcheck, a memory error detector
==10543== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10543== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10543== Command: ./test -r xml "SC::testInsertHard"
==10543== 
==10543== 
==10543== HEAP SUMMARY:
==10543==     in use at exit: 0 bytes in 0 blocks
==10543==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==10543== 
==10543== All heap blocks were freed -- no leaks are possible
==10543== 
==10543== For counts of detected and suppressed errors, rerun with: -v
==10543== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10842== Memcheck, a memory error detector
==10842== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10842== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10842== Command: ./test -r xml "LP::testRemoveEASY"
==10842== 
==10842== 
==10842== HEAP SUMMARY:
==10842==     in use at exit: 0 bytes in 0 blocks
==10842==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==10842== 
==10842== All heap blocks were freed -- no leaks are possible
==10842== 
==10842== For counts of detected and suppressed errors, rerun with: -v
==10842== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10972== Memcheck, a memory error detector
==10972== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10972== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10972== Command: ./test -r xml "LP::testRemoveHard"
==10972== 
==10972== 
==10972== HEAP SUMMARY:
==10972==     in use at exit: 0 bytes in 0 blocks
==10972==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==10972== 
==10972== All heap blocks were freed -- no leaks are possible
==10972== 
==10972== For counts of detected and suppressed errors, rerun with: -v
==10972== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11327== Memcheck, a memory error detector
==11327== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11327== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11327== Command: ./test -r xml "LP::testResizeOnce"
==11327== 
==11327== 
==11327== HEAP SUMMARY:
==11327==     in use at exit: 0 bytes in 0 blocks
==11327==   total heap usage: 1,976 allocs, 1,976 frees, 245,261 bytes allocated
==11327== 
==11327== All heap blocks were freed -- no leaks are possible
==11327== 
==11327== For counts of detected and suppressed errors, rerun with: -v
==11327== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==11688== Memcheck, a memory error detector
==11688== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11688== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11688== Command: ./test -r xml "LP::testResizeAll"
==11688== 
==11688== 
==11688== HEAP SUMMARY:
==11688==     in use at exit: 0 bytes in 0 blocks
==11688==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==11688== 
==11688== All heap blocks were freed -- no leaks are possible
==11688== 
==11688== For counts of detected and suppressed errors, rerun with: -v
==11688== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12095== Memcheck, a memory error detector
==12095== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12095== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12095== Command: ./test -r xml "LP::testInsertEasy"
==12095== 
==12095== 
==12095== HEAP SUMMARY:
==12095==     in use at exit: 0 bytes in 0 blocks
==12095==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==12095== 
==12095== All heap blocks were freed -- no leaks are possible
==12095== 
==12095== For counts of detected and suppressed errors, rerun with: -v
==12095== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12400== Memcheck, a memory error detector
==12400== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12400== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12400== Command: ./test -r xml "LP::testInsertHard"
==12400== 
==12400== 
==12400== HEAP SUMMARY:
==12400==     in use at exit: 0 bytes in 0 blocks
==12400==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==12400== 
==12400== All heap blocks were freed -- no leaks are possible
==12400== 
==12400== For counts of detected and suppressed errors, rerun with: -v
==12400== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **boynton3** using **f66ecac607e2da7b082ce3c463fdf749782045f3** (from **April 6th 2020, 11:59:59 pm**)
