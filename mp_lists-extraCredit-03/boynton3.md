


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
==27452== Memcheck, a memory error detector
==27452== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27452== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27452== Command: ./test -r xml "List::insertFront\ size"
==27452== 
==27452== 
==27452== HEAP SUMMARY:
==27452==     in use at exit: 0 bytes in 0 blocks
==27452==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==27452== 
==27452== All heap blocks were freed -- no leaks are possible
==27452== 
==27452== For counts of detected and suppressed errors, rerun with: -v
==27452== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27509== Memcheck, a memory error detector
==27509== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27509== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27509== Command: ./test -r xml "List::insertBack\ size"
==27509== 
==27509== 
==27509== HEAP SUMMARY:
==27509==     in use at exit: 0 bytes in 0 blocks
==27509==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==27509== 
==27509== All heap blocks were freed -- no leaks are possible
==27509== 
==27509== For counts of detected and suppressed errors, rerun with: -v
==27509== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27516== Memcheck, a memory error detector
==27516== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27516== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27516== Command: ./test -r xml "List::insert\ contents"
==27516== 
==27516== 
==27516== HEAP SUMMARY:
==27516==     in use at exit: 0 bytes in 0 blocks
==27516==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==27516== 
==27516== All heap blocks were freed -- no leaks are possible
==27516== 
==27516== For counts of detected and suppressed errors, rerun with: -v
==27516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27525== Memcheck, a memory error detector
==27525== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27525== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27525== Command: ./test -r xml "List::triplerotate\ basic"
==27525== 
==27525== 
==27525== HEAP SUMMARY:
==27525==     in use at exit: 0 bytes in 0 blocks
==27525==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==27525== 
==27525== All heap blocks were freed -- no leaks are possible
==27525== 
==27525== For counts of detected and suppressed errors, rerun with: -v
==27525== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27537== Memcheck, a memory error detector
==27537== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27537== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27537== Command: ./test -r xml "List::_destroy\ empty\ list"
==27537== 
==27537== 
==27537== HEAP SUMMARY:
==27537==     in use at exit: 0 bytes in 0 blocks
==27537==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==27537== 
==27537== All heap blocks were freed -- no leaks are possible
==27537== 
==27537== For counts of detected and suppressed errors, rerun with: -v
==27537== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27546== Memcheck, a memory error detector
==27546== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27546== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27546== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==27546== 
==27546== 
==27546== HEAP SUMMARY:
==27546==     in use at exit: 0 bytes in 0 blocks
==27546==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==27546== 
==27546== All heap blocks were freed -- no leaks are possible
==27546== 
==27546== For counts of detected and suppressed errors, rerun with: -v
==27546== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27577== Memcheck, a memory error detector
==27577== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27577== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27577== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==27577== 
==27577== 
==27577== HEAP SUMMARY:
==27577==     in use at exit: 0 bytes in 0 blocks
==27577==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==27577== 
==27577== All heap blocks were freed -- no leaks are possible
==27577== 
==27577== For counts of detected and suppressed errors, rerun with: -v
==27577== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27586== Memcheck, a memory error detector
==27586== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27586== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27586== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==27586== 
==27586== 
==27586== HEAP SUMMARY:
==27586==     in use at exit: 0 bytes in 0 blocks
==27586==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==27586== 
==27586== All heap blocks were freed -- no leaks are possible
==27586== 
==27586== For counts of detected and suppressed errors, rerun with: -v
==27586== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27597== Memcheck, a memory error detector
==27597== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27597== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27597== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==27597== 
==27597== 
==27597== HEAP SUMMARY:
==27597==     in use at exit: 0 bytes in 0 blocks
==27597==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==27597== 
==27597== All heap blocks were freed -- no leaks are possible
==27597== 
==27597== For counts of detected and suppressed errors, rerun with: -v
==27597== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27607== Memcheck, a memory error detector
==27607== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27607== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27607== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==27607== 
==27607== 
==27607== HEAP SUMMARY:
==27607==     in use at exit: 0 bytes in 0 blocks
==27607==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==27607== 
==27607== All heap blocks were freed -- no leaks are possible
==27607== 
==27607== For counts of detected and suppressed errors, rerun with: -v
==27607== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27640== Memcheck, a memory error detector
==27640== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27640== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27640== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==27640== 
==27640== 
==27640== HEAP SUMMARY:
==27640==     in use at exit: 0 bytes in 0 blocks
==27640==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==27640== 
==27640== All heap blocks were freed -- no leaks are possible
==27640== 
==27640== For counts of detected and suppressed errors, rerun with: -v
==27640== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27650== Memcheck, a memory error detector
==27650== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27650== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27650== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==27650== 
==27650== 
==27650== HEAP SUMMARY:
==27650==     in use at exit: 0 bytes in 0 blocks
==27650==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==27650== 
==27650== All heap blocks were freed -- no leaks are possible
==27650== 
==27650== For counts of detected and suppressed errors, rerun with: -v
==27650== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27660== Memcheck, a memory error detector
==27660== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27660== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27660== Command: ./test -r xml "List::insert\ contents\ #2"
==27660== 
==27660== 
==27660== HEAP SUMMARY:
==27660==     in use at exit: 0 bytes in 0 blocks
==27660==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==27660== 
==27660== All heap blocks were freed -- no leaks are possible
==27660== 
==27660== For counts of detected and suppressed errors, rerun with: -v
==27660== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27669== Memcheck, a memory error detector
==27669== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27669== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27669== Command: ./test -r xml "List::split\ edge\ cases"
==27669== 
==27669== 
==27669== HEAP SUMMARY:
==27669==     in use at exit: 0 bytes in 0 blocks
==27669==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==27669== 
==27669== All heap blocks were freed -- no leaks are possible
==27669== 
==27669== For counts of detected and suppressed errors, rerun with: -v
==27669== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **boynton3** using **0266681ad05e0691f41951e28da76883b02cc0ff** (from **February 26th 2020, 11:59:59 pm**)
