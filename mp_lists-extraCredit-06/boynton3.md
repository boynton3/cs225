


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
==14023== Memcheck, a memory error detector
==14023== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14023== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14023== Command: ./test -r xml "List::insertFront\ size"
==14023== 
==14023== 
==14023== HEAP SUMMARY:
==14023==     in use at exit: 0 bytes in 0 blocks
==14023==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==14023== 
==14023== All heap blocks were freed -- no leaks are possible
==14023== 
==14023== For counts of detected and suppressed errors, rerun with: -v
==14023== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14026== Memcheck, a memory error detector
==14026== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14026== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14026== Command: ./test -r xml "List::insertBack\ size"
==14026== 
==14026== 
==14026== HEAP SUMMARY:
==14026==     in use at exit: 0 bytes in 0 blocks
==14026==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==14026== 
==14026== All heap blocks were freed -- no leaks are possible
==14026== 
==14026== For counts of detected and suppressed errors, rerun with: -v
==14026== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14029== Memcheck, a memory error detector
==14029== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14029== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14029== Command: ./test -r xml "List::insert\ contents"
==14029== 
==14029== 
==14029== HEAP SUMMARY:
==14029==     in use at exit: 0 bytes in 0 blocks
==14029==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==14029== 
==14029== All heap blocks were freed -- no leaks are possible
==14029== 
==14029== For counts of detected and suppressed errors, rerun with: -v
==14029== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14032== Memcheck, a memory error detector
==14032== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14032== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14032== Command: ./test -r xml "List::triplerotate\ basic"
==14032== 
==14032== 
==14032== HEAP SUMMARY:
==14032==     in use at exit: 0 bytes in 0 blocks
==14032==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==14032== 
==14032== All heap blocks were freed -- no leaks are possible
==14032== 
==14032== For counts of detected and suppressed errors, rerun with: -v
==14032== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14038== Memcheck, a memory error detector
==14038== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14038== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14038== Command: ./test -r xml "List::_destroy\ empty\ list"
==14038== 
==14038== 
==14038== HEAP SUMMARY:
==14038==     in use at exit: 0 bytes in 0 blocks
==14038==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==14038== 
==14038== All heap blocks were freed -- no leaks are possible
==14038== 
==14038== For counts of detected and suppressed errors, rerun with: -v
==14038== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14055== Memcheck, a memory error detector
==14055== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14055== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14055== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==14055== 
==14055== 
==14055== HEAP SUMMARY:
==14055==     in use at exit: 0 bytes in 0 blocks
==14055==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==14055== 
==14055== All heap blocks were freed -- no leaks are possible
==14055== 
==14055== For counts of detected and suppressed errors, rerun with: -v
==14055== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14059== Memcheck, a memory error detector
==14059== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14059== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14059== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==14059== 
==14059== 
==14059== HEAP SUMMARY:
==14059==     in use at exit: 0 bytes in 0 blocks
==14059==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==14059== 
==14059== All heap blocks were freed -- no leaks are possible
==14059== 
==14059== For counts of detected and suppressed errors, rerun with: -v
==14059== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14069== Memcheck, a memory error detector
==14069== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14069== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14069== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==14069== 
==14069== 
==14069== HEAP SUMMARY:
==14069==     in use at exit: 0 bytes in 0 blocks
==14069==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==14069== 
==14069== All heap blocks were freed -- no leaks are possible
==14069== 
==14069== For counts of detected and suppressed errors, rerun with: -v
==14069== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14115== Memcheck, a memory error detector
==14115== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14115== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14115== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==14115== 
==14115== 
==14115== HEAP SUMMARY:
==14115==     in use at exit: 0 bytes in 0 blocks
==14115==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==14115== 
==14115== All heap blocks were freed -- no leaks are possible
==14115== 
==14115== For counts of detected and suppressed errors, rerun with: -v
==14115== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14120== Memcheck, a memory error detector
==14120== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14120== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14120== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14120== 
==14120== 
==14120== HEAP SUMMARY:
==14120==     in use at exit: 0 bytes in 0 blocks
==14120==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==14120== 
==14120== All heap blocks were freed -- no leaks are possible
==14120== 
==14120== For counts of detected and suppressed errors, rerun with: -v
==14120== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14124== Memcheck, a memory error detector
==14124== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14124== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14124== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==14124== 
==14124== 
==14124== HEAP SUMMARY:
==14124==     in use at exit: 0 bytes in 0 blocks
==14124==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==14124== 
==14124== All heap blocks were freed -- no leaks are possible
==14124== 
==14124== For counts of detected and suppressed errors, rerun with: -v
==14124== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14136== Memcheck, a memory error detector
==14136== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14136== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14136== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==14136== 
==14136== 
==14136== HEAP SUMMARY:
==14136==     in use at exit: 0 bytes in 0 blocks
==14136==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==14136== 
==14136== All heap blocks were freed -- no leaks are possible
==14136== 
==14136== For counts of detected and suppressed errors, rerun with: -v
==14136== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14143== Memcheck, a memory error detector
==14143== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14143== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14143== Command: ./test -r xml "List::insert\ contents\ #2"
==14143== 
==14143== 
==14143== HEAP SUMMARY:
==14143==     in use at exit: 0 bytes in 0 blocks
==14143==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==14143== 
==14143== All heap blocks were freed -- no leaks are possible
==14143== 
==14143== For counts of detected and suppressed errors, rerun with: -v
==14143== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14149== Memcheck, a memory error detector
==14149== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14149== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==14149== Command: ./test -r xml "List::split\ edge\ cases"
==14149== 
==14149== 
==14149== HEAP SUMMARY:
==14149==     in use at exit: 0 bytes in 0 blocks
==14149==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==14149== 
==14149== All heap blocks were freed -- no leaks are possible
==14149== 
==14149== For counts of detected and suppressed errors, rerun with: -v
==14149== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **boynton3** using **0266681ad05e0691f41951e28da76883b02cc0ff** (from **February 29th 2020, 11:59:59 pm**)
