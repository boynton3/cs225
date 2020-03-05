


## Score: 107/121 (88.43%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==28060== Memcheck, a memory error detector
==28060== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28060== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28060== Command: ./test -r xml "List::merge"
==28060== 
==28060== 
==28060== HEAP SUMMARY:
==28060==     in use at exit: 0 bytes in 0 blocks
==28060==   total heap usage: 243,356 allocs, 243,356 frees, 79,517,849 bytes allocated
==28060== 
==28060== All heap blocks were freed -- no leaks are possible
==28060== 
==28060== For counts of detected and suppressed errors, rerun with: -v
==28060== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==28077== Memcheck, a memory error detector
==28077== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28077== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28077== Command: ./test -r xml "List::sort\ simple\ #2"
==28077== 
==28077== 
==28077== HEAP SUMMARY:
==28077==     in use at exit: 0 bytes in 0 blocks
==28077==   total heap usage: 2,250 allocs, 2,250 frees, 276,624 bytes allocated
==28077== 
==28077== All heap blocks were freed -- no leaks are possible
==28077== 
==28077== For counts of detected and suppressed errors, rerun with: -v
==28077== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==28086== Memcheck, a memory error detector
==28086== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28086== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28086== Command: ./test -r xml "List::insertFront\ size"
==28086== 
==28086== 
==28086== HEAP SUMMARY:
==28086==     in use at exit: 0 bytes in 0 blocks
==28086==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==28086== 
==28086== All heap blocks were freed -- no leaks are possible
==28086== 
==28086== For counts of detected and suppressed errors, rerun with: -v
==28086== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28093== Memcheck, a memory error detector
==28093== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28093== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28093== Command: ./test -r xml "List::insertBack\ size"
==28093== 
==28093== 
==28093== HEAP SUMMARY:
==28093==     in use at exit: 0 bytes in 0 blocks
==28093==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==28093== 
==28093== All heap blocks were freed -- no leaks are possible
==28093== 
==28093== For counts of detected and suppressed errors, rerun with: -v
==28093== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28097== Memcheck, a memory error detector
==28097== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28097== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28097== Command: ./test -r xml "List::insert\ contents"
==28097== 
==28097== 
==28097== HEAP SUMMARY:
==28097==     in use at exit: 0 bytes in 0 blocks
==28097==   total heap usage: 2,391 allocs, 2,391 frees, 281,080 bytes allocated
==28097== 
==28097== All heap blocks were freed -- no leaks are possible
==28097== 
==28097== For counts of detected and suppressed errors, rerun with: -v
==28097== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28105== Memcheck, a memory error detector
==28105== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28105== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28105== Command: ./test -r xml "List::triplerotate\ basic"
==28105== 
==28105== 
==28105== HEAP SUMMARY:
==28105==     in use at exit: 0 bytes in 0 blocks
==28105==   total heap usage: 2,399 allocs, 2,399 frees, 281,368 bytes allocated
==28105== 
==28105== All heap blocks were freed -- no leaks are possible
==28105== 
==28105== For counts of detected and suppressed errors, rerun with: -v
==28105== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==28108== Memcheck, a memory error detector
==28108== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28108== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28108== Command: ./test -r xml "List::triplerotate\ simple"
==28108== 
==28108== 
==28108== HEAP SUMMARY:
==28108==     in use at exit: 0 bytes in 0 blocks
==28108==   total heap usage: 2,403 allocs, 2,403 frees, 281,464 bytes allocated
==28108== 
==28108== All heap blocks were freed -- no leaks are possible
==28108== 
==28108== For counts of detected and suppressed errors, rerun with: -v
==28108== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==28116== Memcheck, a memory error detector
==28116== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28116== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28116== Command: ./test -r xml "List::split\ simple"
==28116== 
==28116== 
==28116== HEAP SUMMARY:
==28116==     in use at exit: 0 bytes in 0 blocks
==28116==   total heap usage: 2,253 allocs, 2,253 frees, 276,648 bytes allocated
==28116== 
==28116== All heap blocks were freed -- no leaks are possible
==28116== 
==28116== For counts of detected and suppressed errors, rerun with: -v
==28116== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==28122== Memcheck, a memory error detector
==28122== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28122== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28122== Command: ./test -r xml "List::_destroy\ empty\ list"
==28122== 
==28122== 
==28122== HEAP SUMMARY:
==28122==     in use at exit: 0 bytes in 0 blocks
==28122==   total heap usage: 2,403 allocs, 2,403 frees, 282,008 bytes allocated
==28122== 
==28122== All heap blocks were freed -- no leaks are possible
==28122== 
==28122== For counts of detected and suppressed errors, rerun with: -v
==28122== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28125== Memcheck, a memory error detector
==28125== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28125== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28125== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==28125== 
==28125== 
==28125== HEAP SUMMARY:
==28125==     in use at exit: 0 bytes in 0 blocks
==28125==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==28125== 
==28125== All heap blocks were freed -- no leaks are possible
==28125== 
==28125== For counts of detected and suppressed errors, rerun with: -v
==28125== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28130== Memcheck, a memory error detector
==28130== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28130== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28130== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==28130== 
==28130== 
==28130== HEAP SUMMARY:
==28130==     in use at exit: 0 bytes in 0 blocks
==28130==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==28130== 
==28130== All heap blocks were freed -- no leaks are possible
==28130== 
==28130== For counts of detected and suppressed errors, rerun with: -v
==28130== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28133== Memcheck, a memory error detector
==28133== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28133== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28133== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==28133== 
==28133== 
==28133== HEAP SUMMARY:
==28133==     in use at exit: 0 bytes in 0 blocks
==28133==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==28133== 
==28133== All heap blocks were freed -- no leaks are possible
==28133== 
==28133== For counts of detected and suppressed errors, rerun with: -v
==28133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==28136== Memcheck, a memory error detector
==28136== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28136== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28136== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==28136== 
==28136== 
==28136== HEAP SUMMARY:
==28136==     in use at exit: 0 bytes in 0 blocks
==28136==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==28136== 
==28136== All heap blocks were freed -- no leaks are possible
==28136== 
==28136== For counts of detected and suppressed errors, rerun with: -v
==28136== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==28142== Memcheck, a memory error detector
==28142== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28142== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28142== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==28142== 
==28142== 
==28142== HEAP SUMMARY:
==28142==     in use at exit: 0 bytes in 0 blocks
==28142==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==28142== 
==28142== All heap blocks were freed -- no leaks are possible
==28142== 
==28142== For counts of detected and suppressed errors, rerun with: -v
==28142== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28145== Memcheck, a memory error detector
==28145== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28145== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28145== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==28145== 
==28145== 
==28145== HEAP SUMMARY:
==28145==     in use at exit: 0 bytes in 0 blocks
==28145==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==28145== 
==28145== All heap blocks were freed -- no leaks are possible
==28145== 
==28145== For counts of detected and suppressed errors, rerun with: -v
==28145== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28148== Memcheck, a memory error detector
==28148== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28148== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28148== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==28148== 
==28148== 
==28148== HEAP SUMMARY:
==28148==     in use at exit: 0 bytes in 0 blocks
==28148==   total heap usage: 2,400 allocs, 2,400 frees, 283,776 bytes allocated
==28148== 
==28148== All heap blocks were freed -- no leaks are possible
==28148== 
==28148== For counts of detected and suppressed errors, rerun with: -v
==28148== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28151== Memcheck, a memory error detector
==28151== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28151== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28151== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==28151== 
==28151== 
==28151== HEAP SUMMARY:
==28151==     in use at exit: 0 bytes in 0 blocks
==28151==   total heap usage: 2,400 allocs, 2,400 frees, 286,176 bytes allocated
==28151== 
==28151== All heap blocks were freed -- no leaks are possible
==28151== 
==28151== For counts of detected and suppressed errors, rerun with: -v
==28151== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==28156== Memcheck, a memory error detector
==28156== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28156== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28156== Command: ./test -r xml "List::reverse\ simple"
==28156== 
==28156== 
==28156== HEAP SUMMARY:
==28156==     in use at exit: 0 bytes in 0 blocks
==28156==   total heap usage: 2,256 allocs, 2,256 frees, 276,756 bytes allocated
==28156== 
==28156== All heap blocks were freed -- no leaks are possible
==28156== 
==28156== For counts of detected and suppressed errors, rerun with: -v
==28156== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==28159== Memcheck, a memory error detector
==28159== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28159== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28159== Command: ./test -r xml "List::reverse\ edge\ cases"
==28159== 
==28159== 
==28159== HEAP SUMMARY:
==28159==     in use at exit: 0 bytes in 0 blocks
==28159==   total heap usage: 2,401 allocs, 2,401 frees, 281,456 bytes allocated
==28159== 
==28159== All heap blocks were freed -- no leaks are possible
==28159== 
==28159== For counts of detected and suppressed errors, rerun with: -v
==28159== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==28162== Memcheck, a memory error detector
==28162== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28162== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28162== Command: ./test -r xml "List::reverseNth\ #3"
==28162== 
==28162== 
==28162== HEAP SUMMARY:
==28162==     in use at exit: 0 bytes in 0 blocks
==28162==   total heap usage: 2,262 allocs, 2,262 frees, 276,936 bytes allocated
==28162== 
==28162== All heap blocks were freed -- no leaks are possible
==28162== 
==28162== For counts of detected and suppressed errors, rerun with: -v
==28162== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==28166== Memcheck, a memory error detector
==28166== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28166== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28166== Command: ./test -r xml "List::merge\ #2"
==28166== 
==28166== 
==28166== HEAP SUMMARY:
==28166==     in use at exit: 0 bytes in 0 blocks
==28166==   total heap usage: 2,291 allocs, 2,291 frees, 278,712 bytes allocated
==28166== 
==28166== All heap blocks were freed -- no leaks are possible
==28166== 
==28166== For counts of detected and suppressed errors, rerun with: -v
==28166== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==28172== Memcheck, a memory error detector
==28172== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28172== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28172== Command: ./test -r xml "List::insert\ contents\ #2"
==28172== 
==28172== 
==28172== HEAP SUMMARY:
==28172==     in use at exit: 0 bytes in 0 blocks
==28172==   total heap usage: 2,406 allocs, 2,406 frees, 281,576 bytes allocated
==28172== 
==28172== All heap blocks were freed -- no leaks are possible
==28172== 
==28172== For counts of detected and suppressed errors, rerun with: -v
==28172== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==28175== Memcheck, a memory error detector
==28175== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28175== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28175== Command: ./test -r xml "List::split\ edge\ cases"
==28175== 
==28175== 
==28175== HEAP SUMMARY:
==28175==     in use at exit: 0 bytes in 0 blocks
==28175==   total heap usage: 2,396 allocs, 2,396 frees, 281,240 bytes allocated
==28175== 
==28175== All heap blocks were freed -- no leaks are possible
==28175== 
==28175== For counts of detected and suppressed errors, rerun with: -v
==28175== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [2/2] - List::triplerotate hard

- **Points**: 2 / 2

```
==28179== Memcheck, a memory error detector
==28179== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==28179== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==28179== Command: ./test -r xml "List::triplerotate\ hard"
==28179== 
==28179== 
==28179== HEAP SUMMARY:
==28179==     in use at exit: 0 bytes in 0 blocks
==28179==   total heap usage: 2,408 allocs, 2,408 frees, 281,624 bytes allocated
==28179== 
==28179== All heap blocks were freed -- no leaks are possible
==28179== 
==28179== For counts of detected and suppressed errors, rerun with: -v
==28179== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate hard" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - List::triplerotate image

- **Points**: 10 / 10





---

This report was generated for **boynton3** using **0a26a146ffefc41750956f505c421df607beb323** (from **March 3rd 2020, 11:59:59 pm**)
