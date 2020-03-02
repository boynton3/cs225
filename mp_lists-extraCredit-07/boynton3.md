


## Score: 31/52 (59.62%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==46881== Memcheck, a memory error detector
==46881== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==46881== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==46881== Command: ./test -r xml "List::insertFront\ size"
==46881== 
==46881== 
==46881== HEAP SUMMARY:
==46881==     in use at exit: 0 bytes in 0 blocks
==46881==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==46881== 
==46881== All heap blocks were freed -- no leaks are possible
==46881== 
==46881== For counts of detected and suppressed errors, rerun with: -v
==46881== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==46886== Memcheck, a memory error detector
==46886== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==46886== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==46886== Command: ./test -r xml "List::insertBack\ size"
==46886== 
==46886== 
==46886== HEAP SUMMARY:
==46886==     in use at exit: 0 bytes in 0 blocks
==46886==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==46886== 
==46886== All heap blocks were freed -- no leaks are possible
==46886== 
==46886== For counts of detected and suppressed errors, rerun with: -v
==46886== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==46912== Memcheck, a memory error detector
==46912== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==46912== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==46912== Command: ./test -r xml "List::insert\ contents"
==46912== 
==46912== 
==46912== HEAP SUMMARY:
==46912==     in use at exit: 0 bytes in 0 blocks
==46912==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==46912== 
==46912== All heap blocks were freed -- no leaks are possible
==46912== 
==46912== For counts of detected and suppressed errors, rerun with: -v
==46912== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==46943== Memcheck, a memory error detector
==46943== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==46943== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==46943== Command: ./test -r xml "List::triplerotate\ basic"
==46943== 
==46943== 
==46943== HEAP SUMMARY:
==46943==     in use at exit: 0 bytes in 0 blocks
==46943==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==46943== 
==46943== All heap blocks were freed -- no leaks are possible
==46943== 
==46943== For counts of detected and suppressed errors, rerun with: -v
==46943== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate basic" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="52">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - List::triplerotate simple

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="79">
        <Original>
          "&lt; 2 3 1 5 6 4 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 2 3 1 5 6 4 >" == "&lt; 1 2 3 4 5 6 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="82">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split images

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==46960== Memcheck, a memory error detector
==46960== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==46960== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==46960== Command: ./test -r xml "List::_destroy\ empty\ list"
==46960== 
==46960== 
==46960== HEAP SUMMARY:
==46960==     in use at exit: 0 bytes in 0 blocks
==46960==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==46960== 
==46960== All heap blocks were freed -- no leaks are possible
==46960== 
==46960== For counts of detected and suppressed errors, rerun with: -v
==46960== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="159">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==46969== Memcheck, a memory error detector
==46969== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==46969== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==46969== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==46969== 
==46969== 
==46969== HEAP SUMMARY:
==46969==     in use at exit: 0 bytes in 0 blocks
==46969==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==46969== 
==46969== All heap blocks were freed -- no leaks are possible
==46969== 
==46969== For counts of detected and suppressed errors, rerun with: -v
==46969== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="170">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==46978== Memcheck, a memory error detector
==46978== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==46978== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==46978== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==46978== 
==46978== 
==46978== HEAP SUMMARY:
==46978==     in use at exit: 0 bytes in 0 blocks
==46978==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==46978== 
==46978== All heap blocks were freed -- no leaks are possible
==46978== 
==46978== For counts of detected and suppressed errors, rerun with: -v
==46978== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="178">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==47010== Memcheck, a memory error detector
==47010== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==47010== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==47010== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==47010== 
==47010== 
==47010== HEAP SUMMARY:
==47010==     in use at exit: 0 bytes in 0 blocks
==47010==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==47010== 
==47010== All heap blocks were freed -- no leaks are possible
==47010== 
==47010== For counts of detected and suppressed errors, rerun with: -v
==47010== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="187">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="197">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==47019== Memcheck, a memory error detector
==47019== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==47019== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==47019== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==47019== 
==47019== 
==47019== HEAP SUMMARY:
==47019==     in use at exit: 0 bytes in 0 blocks
==47019==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==47019== 
==47019== All heap blocks were freed -- no leaks are possible
==47019== 
==47019== For counts of detected and suppressed errors, rerun with: -v
==47019== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="207">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==47029== Memcheck, a memory error detector
==47029== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==47029== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==47029== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==47029== 
==47029== 
==47029== HEAP SUMMARY:
==47029==     in use at exit: 0 bytes in 0 blocks
==47029==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==47029== 
==47029== All heap blocks were freed -- no leaks are possible
==47029== 
==47029== For counts of detected and suppressed errors, rerun with: -v
==47029== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="219">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==47034== Memcheck, a memory error detector
==47034== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==47034== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==47034== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==47034== 
==47034== 
==47034== HEAP SUMMARY:
==47034==     in use at exit: 0 bytes in 0 blocks
==47034==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==47034== 
==47034== All heap blocks were freed -- no leaks are possible
==47034== 
==47034== For counts of detected and suppressed errors, rerun with: -v
==47034== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==47043== Memcheck, a memory error detector
==47043== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==47043== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==47043== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==47043== 
==47043== 
==47043== HEAP SUMMARY:
==47043==     in use at exit: 0 bytes in 0 blocks
==47043==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==47043== 
==47043== All heap blocks were freed -- no leaks are possible
==47043== 
==47043== For counts of detected and suppressed errors, rerun with: -v
==47043== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="246">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==47058== Memcheck, a memory error detector
==47058== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==47058== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==47058== Command: ./test -r xml "List::insert\ contents\ #2"
==47058== 
==47058== 
==47058== HEAP SUMMARY:
==47058==     in use at exit: 0 bytes in 0 blocks
==47058==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==47058== 
==47058== All heap blocks were freed -- no leaks are possible
==47058== 
==47058== For counts of detected and suppressed errors, rerun with: -v
==47058== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==47067== Memcheck, a memory error detector
==47067== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==47067== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==47067== Command: ./test -r xml "List::split\ edge\ cases"
==47067== 
==47067== 
==47067== HEAP SUMMARY:
==47067==     in use at exit: 0 bytes in 0 blocks
==47067==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==47067== 
==47067== All heap blocks were freed -- no leaks are possible
==47067== 
==47067== For counts of detected and suppressed errors, rerun with: -v
==47067== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **9f41ed2504f5396df761b5bbbd4058b7bcd3ea1e** (from **March 1st 2020, 11:59:59 pm**)
