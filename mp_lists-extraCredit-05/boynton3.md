


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
==35232== Memcheck, a memory error detector
==35232== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35232== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35232== Command: ./test -r xml "List::insertFront\ size"
==35232== 
==35232== 
==35232== HEAP SUMMARY:
==35232==     in use at exit: 0 bytes in 0 blocks
==35232==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==35232== 
==35232== All heap blocks were freed -- no leaks are possible
==35232== 
==35232== For counts of detected and suppressed errors, rerun with: -v
==35232== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35237== Memcheck, a memory error detector
==35237== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35237== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35237== Command: ./test -r xml "List::insertBack\ size"
==35237== 
==35237== 
==35237== HEAP SUMMARY:
==35237==     in use at exit: 0 bytes in 0 blocks
==35237==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==35237== 
==35237== All heap blocks were freed -- no leaks are possible
==35237== 
==35237== For counts of detected and suppressed errors, rerun with: -v
==35237== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35242== Memcheck, a memory error detector
==35242== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35242== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35242== Command: ./test -r xml "List::insert\ contents"
==35242== 
==35242== 
==35242== HEAP SUMMARY:
==35242==     in use at exit: 0 bytes in 0 blocks
==35242==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==35242== 
==35242== All heap blocks were freed -- no leaks are possible
==35242== 
==35242== For counts of detected and suppressed errors, rerun with: -v
==35242== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35250== Memcheck, a memory error detector
==35250== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35250== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35250== Command: ./test -r xml "List::triplerotate\ basic"
==35250== 
==35250== 
==35250== HEAP SUMMARY:
==35250==     in use at exit: 0 bytes in 0 blocks
==35250==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==35250== 
==35250== All heap blocks were freed -- no leaks are possible
==35250== 
==35250== For counts of detected and suppressed errors, rerun with: -v
==35250== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35261== Memcheck, a memory error detector
==35261== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35261== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35261== Command: ./test -r xml "List::_destroy\ empty\ list"
==35261== 
==35261== 
==35261== HEAP SUMMARY:
==35261==     in use at exit: 0 bytes in 0 blocks
==35261==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==35261== 
==35261== All heap blocks were freed -- no leaks are possible
==35261== 
==35261== For counts of detected and suppressed errors, rerun with: -v
==35261== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35268== Memcheck, a memory error detector
==35268== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35268== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35268== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==35268== 
==35268== 
==35268== HEAP SUMMARY:
==35268==     in use at exit: 0 bytes in 0 blocks
==35268==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==35268== 
==35268== All heap blocks were freed -- no leaks are possible
==35268== 
==35268== For counts of detected and suppressed errors, rerun with: -v
==35268== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35273== Memcheck, a memory error detector
==35273== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35273== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35273== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==35273== 
==35273== 
==35273== HEAP SUMMARY:
==35273==     in use at exit: 0 bytes in 0 blocks
==35273==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==35273== 
==35273== All heap blocks were freed -- no leaks are possible
==35273== 
==35273== For counts of detected and suppressed errors, rerun with: -v
==35273== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35284== Memcheck, a memory error detector
==35284== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35284== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35284== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==35284== 
==35284== 
==35284== HEAP SUMMARY:
==35284==     in use at exit: 0 bytes in 0 blocks
==35284==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==35284== 
==35284== All heap blocks were freed -- no leaks are possible
==35284== 
==35284== For counts of detected and suppressed errors, rerun with: -v
==35284== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35290== Memcheck, a memory error detector
==35290== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35290== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35290== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==35290== 
==35290== 
==35290== HEAP SUMMARY:
==35290==     in use at exit: 0 bytes in 0 blocks
==35290==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==35290== 
==35290== All heap blocks were freed -- no leaks are possible
==35290== 
==35290== For counts of detected and suppressed errors, rerun with: -v
==35290== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35298== Memcheck, a memory error detector
==35298== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35298== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35298== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==35298== 
==35298== 
==35298== HEAP SUMMARY:
==35298==     in use at exit: 0 bytes in 0 blocks
==35298==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==35298== 
==35298== All heap blocks were freed -- no leaks are possible
==35298== 
==35298== For counts of detected and suppressed errors, rerun with: -v
==35298== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35312== Memcheck, a memory error detector
==35312== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35312== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35312== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==35312== 
==35312== 
==35312== HEAP SUMMARY:
==35312==     in use at exit: 0 bytes in 0 blocks
==35312==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==35312== 
==35312== All heap blocks were freed -- no leaks are possible
==35312== 
==35312== For counts of detected and suppressed errors, rerun with: -v
==35312== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35318== Memcheck, a memory error detector
==35318== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35318== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35318== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==35318== 
==35318== 
==35318== HEAP SUMMARY:
==35318==     in use at exit: 0 bytes in 0 blocks
==35318==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==35318== 
==35318== All heap blocks were freed -- no leaks are possible
==35318== 
==35318== For counts of detected and suppressed errors, rerun with: -v
==35318== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35338== Memcheck, a memory error detector
==35338== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35338== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35338== Command: ./test -r xml "List::insert\ contents\ #2"
==35338== 
==35338== 
==35338== HEAP SUMMARY:
==35338==     in use at exit: 0 bytes in 0 blocks
==35338==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==35338== 
==35338== All heap blocks were freed -- no leaks are possible
==35338== 
==35338== For counts of detected and suppressed errors, rerun with: -v
==35338== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==35343== Memcheck, a memory error detector
==35343== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==35343== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==35343== Command: ./test -r xml "List::split\ edge\ cases"
==35343== 
==35343== 
==35343== HEAP SUMMARY:
==35343==     in use at exit: 0 bytes in 0 blocks
==35343==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==35343== 
==35343== All heap blocks were freed -- no leaks are possible
==35343== 
==35343== For counts of detected and suppressed errors, rerun with: -v
==35343== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **boynton3** using **0266681ad05e0691f41951e28da76883b02cc0ff** (from **February 28th 2020, 11:59:59 pm**)
