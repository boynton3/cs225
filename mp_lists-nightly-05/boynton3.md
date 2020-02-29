


## Score: 33/109 (30.28%)


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


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
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


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
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
==37462== Memcheck, a memory error detector
==37462== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37462== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37462== Command: ./test -r xml "List::insertFront\ size"
==37462== 
==37462== 
==37462== HEAP SUMMARY:
==37462==     in use at exit: 0 bytes in 0 blocks
==37462==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==37462== 
==37462== All heap blocks were freed -- no leaks are possible
==37462== 
==37462== For counts of detected and suppressed errors, rerun with: -v
==37462== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37470== Memcheck, a memory error detector
==37470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37470== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37470== Command: ./test -r xml "List::insertBack\ size"
==37470== 
==37470== 
==37470== HEAP SUMMARY:
==37470==     in use at exit: 0 bytes in 0 blocks
==37470==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==37470== 
==37470== All heap blocks were freed -- no leaks are possible
==37470== 
==37470== For counts of detected and suppressed errors, rerun with: -v
==37470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37475== Memcheck, a memory error detector
==37475== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37475== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37475== Command: ./test -r xml "List::insert\ contents"
==37475== 
==37475== 
==37475== HEAP SUMMARY:
==37475==     in use at exit: 0 bytes in 0 blocks
==37475==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==37475== 
==37475== All heap blocks were freed -- no leaks are possible
==37475== 
==37475== For counts of detected and suppressed errors, rerun with: -v
==37475== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37508== Memcheck, a memory error detector
==37508== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37508== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37508== Command: ./test -r xml "List::triplerotate\ basic"
==37508== 
==37508== 
==37508== HEAP SUMMARY:
==37508==     in use at exit: 0 bytes in 0 blocks
==37508==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==37508== 
==37508== All heap blocks were freed -- no leaks are possible
==37508== 
==37508== For counts of detected and suppressed errors, rerun with: -v
==37508== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37518== Memcheck, a memory error detector
==37518== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37518== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37518== Command: ./test -r xml "List::_destroy\ empty\ list"
==37518== 
==37518== 
==37518== HEAP SUMMARY:
==37518==     in use at exit: 0 bytes in 0 blocks
==37518==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==37518== 
==37518== All heap blocks were freed -- no leaks are possible
==37518== 
==37518== For counts of detected and suppressed errors, rerun with: -v
==37518== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37527== Memcheck, a memory error detector
==37527== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37527== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37527== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==37527== 
==37527== 
==37527== HEAP SUMMARY:
==37527==     in use at exit: 0 bytes in 0 blocks
==37527==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==37527== 
==37527== All heap blocks were freed -- no leaks are possible
==37527== 
==37527== For counts of detected and suppressed errors, rerun with: -v
==37527== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37537== Memcheck, a memory error detector
==37537== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37537== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37537== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==37537== 
==37537== 
==37537== HEAP SUMMARY:
==37537==     in use at exit: 0 bytes in 0 blocks
==37537==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==37537== 
==37537== All heap blocks were freed -- no leaks are possible
==37537== 
==37537== For counts of detected and suppressed errors, rerun with: -v
==37537== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37542== Memcheck, a memory error detector
==37542== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37542== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37542== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==37542== 
==37542== 
==37542== HEAP SUMMARY:
==37542==     in use at exit: 0 bytes in 0 blocks
==37542==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==37542== 
==37542== All heap blocks were freed -- no leaks are possible
==37542== 
==37542== For counts of detected and suppressed errors, rerun with: -v
==37542== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37547== Memcheck, a memory error detector
==37547== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37547== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37547== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==37547== 
==37547== 
==37547== HEAP SUMMARY:
==37547==     in use at exit: 0 bytes in 0 blocks
==37547==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==37547== 
==37547== All heap blocks were freed -- no leaks are possible
==37547== 
==37547== For counts of detected and suppressed errors, rerun with: -v
==37547== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37550== Memcheck, a memory error detector
==37550== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37550== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37550== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==37550== 
==37550== 
==37550== HEAP SUMMARY:
==37550==     in use at exit: 0 bytes in 0 blocks
==37550==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==37550== 
==37550== All heap blocks were freed -- no leaks are possible
==37550== 
==37550== For counts of detected and suppressed errors, rerun with: -v
==37550== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37553== Memcheck, a memory error detector
==37553== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37553== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37553== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==37553== 
==37553== 
==37553== HEAP SUMMARY:
==37553==     in use at exit: 0 bytes in 0 blocks
==37553==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==37553== 
==37553== All heap blocks were freed -- no leaks are possible
==37553== 
==37553== For counts of detected and suppressed errors, rerun with: -v
==37553== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37556== Memcheck, a memory error detector
==37556== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37556== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37556== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==37556== 
==37556== 
==37556== HEAP SUMMARY:
==37556==     in use at exit: 0 bytes in 0 blocks
==37556==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==37556== 
==37556== All heap blocks were freed -- no leaks are possible
==37556== 
==37556== For counts of detected and suppressed errors, rerun with: -v
==37556== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==37560== Memcheck, a memory error detector
==37560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37560== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37560== Command: ./test -r xml "List::reverse\ edge\ cases"
==37560== 
==37560== 
==37560== HEAP SUMMARY:
==37560==     in use at exit: 0 bytes in 0 blocks
==37560==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==37560== 
==37560== All heap blocks were freed -- no leaks are possible
==37560== 
==37560== For counts of detected and suppressed errors, rerun with: -v
==37560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
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
==37566== Memcheck, a memory error detector
==37566== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37566== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37566== Command: ./test -r xml "List::insert\ contents\ #2"
==37566== 
==37566== 
==37566== HEAP SUMMARY:
==37566==     in use at exit: 0 bytes in 0 blocks
==37566==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==37566== 
==37566== All heap blocks were freed -- no leaks are possible
==37566== 
==37566== For counts of detected and suppressed errors, rerun with: -v
==37566== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==37627== Memcheck, a memory error detector
==37627== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==37627== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==37627== Command: ./test -r xml "List::split\ edge\ cases"
==37627== 
==37627== 
==37627== HEAP SUMMARY:
==37627==     in use at exit: 0 bytes in 0 blocks
==37627==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==37627== 
==37627== All heap blocks were freed -- no leaks are possible
==37627== 
==37627== For counts of detected and suppressed errors, rerun with: -v
==37627== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
