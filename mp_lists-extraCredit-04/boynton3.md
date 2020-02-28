


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
==1788== Memcheck, a memory error detector
==1788== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1788== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1788== Command: ./test -r xml "List::insertFront\ size"
==1788== 
==1788== 
==1788== HEAP SUMMARY:
==1788==     in use at exit: 0 bytes in 0 blocks
==1788==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==1788== 
==1788== All heap blocks were freed -- no leaks are possible
==1788== 
==1788== For counts of detected and suppressed errors, rerun with: -v
==1788== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1793== Memcheck, a memory error detector
==1793== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1793== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1793== Command: ./test -r xml "List::insertBack\ size"
==1793== 
==1793== 
==1793== HEAP SUMMARY:
==1793==     in use at exit: 0 bytes in 0 blocks
==1793==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==1793== 
==1793== All heap blocks were freed -- no leaks are possible
==1793== 
==1793== For counts of detected and suppressed errors, rerun with: -v
==1793== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1798== Memcheck, a memory error detector
==1798== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1798== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1798== Command: ./test -r xml "List::insert\ contents"
==1798== 
==1798== 
==1798== HEAP SUMMARY:
==1798==     in use at exit: 0 bytes in 0 blocks
==1798==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==1798== 
==1798== All heap blocks were freed -- no leaks are possible
==1798== 
==1798== For counts of detected and suppressed errors, rerun with: -v
==1798== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1819== Memcheck, a memory error detector
==1819== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1819== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1819== Command: ./test -r xml "List::triplerotate\ basic"
==1819== 
==1819== 
==1819== HEAP SUMMARY:
==1819==     in use at exit: 0 bytes in 0 blocks
==1819==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==1819== 
==1819== All heap blocks were freed -- no leaks are possible
==1819== 
==1819== For counts of detected and suppressed errors, rerun with: -v
==1819== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1843== Memcheck, a memory error detector
==1843== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1843== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1843== Command: ./test -r xml "List::_destroy\ empty\ list"
==1843== 
==1843== 
==1843== HEAP SUMMARY:
==1843==     in use at exit: 0 bytes in 0 blocks
==1843==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==1843== 
==1843== All heap blocks were freed -- no leaks are possible
==1843== 
==1843== For counts of detected and suppressed errors, rerun with: -v
==1843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1848== Memcheck, a memory error detector
==1848== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1848== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1848== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==1848== 
==1848== 
==1848== HEAP SUMMARY:
==1848==     in use at exit: 0 bytes in 0 blocks
==1848==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==1848== 
==1848== All heap blocks were freed -- no leaks are possible
==1848== 
==1848== For counts of detected and suppressed errors, rerun with: -v
==1848== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1853== Memcheck, a memory error detector
==1853== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1853== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1853== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==1853== 
==1853== 
==1853== HEAP SUMMARY:
==1853==     in use at exit: 0 bytes in 0 blocks
==1853==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==1853== 
==1853== All heap blocks were freed -- no leaks are possible
==1853== 
==1853== For counts of detected and suppressed errors, rerun with: -v
==1853== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1873== Memcheck, a memory error detector
==1873== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1873== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1873== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==1873== 
==1873== 
==1873== HEAP SUMMARY:
==1873==     in use at exit: 0 bytes in 0 blocks
==1873==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==1873== 
==1873== All heap blocks were freed -- no leaks are possible
==1873== 
==1873== For counts of detected and suppressed errors, rerun with: -v
==1873== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1882== Memcheck, a memory error detector
==1882== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1882== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1882== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==1882== 
==1882== 
==1882== HEAP SUMMARY:
==1882==     in use at exit: 0 bytes in 0 blocks
==1882==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==1882== 
==1882== All heap blocks were freed -- no leaks are possible
==1882== 
==1882== For counts of detected and suppressed errors, rerun with: -v
==1882== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1915== Memcheck, a memory error detector
==1915== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1915== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1915== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1915== 
==1915== 
==1915== HEAP SUMMARY:
==1915==     in use at exit: 0 bytes in 0 blocks
==1915==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==1915== 
==1915== All heap blocks were freed -- no leaks are possible
==1915== 
==1915== For counts of detected and suppressed errors, rerun with: -v
==1915== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1939== Memcheck, a memory error detector
==1939== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1939== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1939== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==1939== 
==1939== 
==1939== HEAP SUMMARY:
==1939==     in use at exit: 0 bytes in 0 blocks
==1939==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==1939== 
==1939== All heap blocks were freed -- no leaks are possible
==1939== 
==1939== For counts of detected and suppressed errors, rerun with: -v
==1939== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1948== Memcheck, a memory error detector
==1948== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1948== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1948== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==1948== 
==1948== 
==1948== HEAP SUMMARY:
==1948==     in use at exit: 0 bytes in 0 blocks
==1948==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==1948== 
==1948== All heap blocks were freed -- no leaks are possible
==1948== 
==1948== For counts of detected and suppressed errors, rerun with: -v
==1948== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1982== Memcheck, a memory error detector
==1982== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1982== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1982== Command: ./test -r xml "List::insert\ contents\ #2"
==1982== 
==1982== 
==1982== HEAP SUMMARY:
==1982==     in use at exit: 0 bytes in 0 blocks
==1982==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==1982== 
==1982== All heap blocks were freed -- no leaks are possible
==1982== 
==1982== For counts of detected and suppressed errors, rerun with: -v
==1982== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1987== Memcheck, a memory error detector
==1987== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1987== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1987== Command: ./test -r xml "List::split\ edge\ cases"
==1987== 
==1987== 
==1987== HEAP SUMMARY:
==1987==     in use at exit: 0 bytes in 0 blocks
==1987==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==1987== 
==1987== All heap blocks were freed -- no leaks are possible
==1987== 
==1987== For counts of detected and suppressed errors, rerun with: -v
==1987== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **boynton3** using **0266681ad05e0691f41951e28da76883b02cc0ff** (from **February 27th 2020, 11:59:59 pm**)
