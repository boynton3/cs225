


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
==45572== Memcheck, a memory error detector
==45572== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45572== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45572== Command: ./test -r xml "List::insertFront\ size"
==45572== 
==45572== 
==45572== HEAP SUMMARY:
==45572==     in use at exit: 0 bytes in 0 blocks
==45572==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==45572== 
==45572== All heap blocks were freed -- no leaks are possible
==45572== 
==45572== For counts of detected and suppressed errors, rerun with: -v
==45572== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45577== Memcheck, a memory error detector
==45577== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45577== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45577== Command: ./test -r xml "List::insertBack\ size"
==45577== 
==45577== 
==45577== HEAP SUMMARY:
==45577==     in use at exit: 0 bytes in 0 blocks
==45577==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==45577== 
==45577== All heap blocks were freed -- no leaks are possible
==45577== 
==45577== For counts of detected and suppressed errors, rerun with: -v
==45577== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45583== Memcheck, a memory error detector
==45583== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45583== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45583== Command: ./test -r xml "List::insert\ contents"
==45583== 
==45583== 
==45583== HEAP SUMMARY:
==45583==     in use at exit: 0 bytes in 0 blocks
==45583==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==45583== 
==45583== All heap blocks were freed -- no leaks are possible
==45583== 
==45583== For counts of detected and suppressed errors, rerun with: -v
==45583== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45589== Memcheck, a memory error detector
==45589== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45589== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45589== Command: ./test -r xml "List::triplerotate\ basic"
==45589== 
==45589== 
==45589== HEAP SUMMARY:
==45589==     in use at exit: 0 bytes in 0 blocks
==45589==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==45589== 
==45589== All heap blocks were freed -- no leaks are possible
==45589== 
==45589== For counts of detected and suppressed errors, rerun with: -v
==45589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45595== Memcheck, a memory error detector
==45595== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45595== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45595== Command: ./test -r xml "List::_destroy\ empty\ list"
==45595== 
==45595== 
==45595== HEAP SUMMARY:
==45595==     in use at exit: 0 bytes in 0 blocks
==45595==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==45595== 
==45595== All heap blocks were freed -- no leaks are possible
==45595== 
==45595== For counts of detected and suppressed errors, rerun with: -v
==45595== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45599== Memcheck, a memory error detector
==45599== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45599== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45599== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==45599== 
==45599== 
==45599== HEAP SUMMARY:
==45599==     in use at exit: 0 bytes in 0 blocks
==45599==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==45599== 
==45599== All heap blocks were freed -- no leaks are possible
==45599== 
==45599== For counts of detected and suppressed errors, rerun with: -v
==45599== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45602== Memcheck, a memory error detector
==45602== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45602== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45602== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==45602== 
==45602== 
==45602== HEAP SUMMARY:
==45602==     in use at exit: 0 bytes in 0 blocks
==45602==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==45602== 
==45602== All heap blocks were freed -- no leaks are possible
==45602== 
==45602== For counts of detected and suppressed errors, rerun with: -v
==45602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45607== Memcheck, a memory error detector
==45607== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45607== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45607== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==45607== 
==45607== 
==45607== HEAP SUMMARY:
==45607==     in use at exit: 0 bytes in 0 blocks
==45607==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==45607== 
==45607== All heap blocks were freed -- no leaks are possible
==45607== 
==45607== For counts of detected and suppressed errors, rerun with: -v
==45607== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45613== Memcheck, a memory error detector
==45613== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45613== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45613== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==45613== 
==45613== 
==45613== HEAP SUMMARY:
==45613==     in use at exit: 0 bytes in 0 blocks
==45613==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==45613== 
==45613== All heap blocks were freed -- no leaks are possible
==45613== 
==45613== For counts of detected and suppressed errors, rerun with: -v
==45613== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45620== Memcheck, a memory error detector
==45620== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45620== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45620== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==45620== 
==45620== 
==45620== HEAP SUMMARY:
==45620==     in use at exit: 0 bytes in 0 blocks
==45620==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==45620== 
==45620== All heap blocks were freed -- no leaks are possible
==45620== 
==45620== For counts of detected and suppressed errors, rerun with: -v
==45620== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45628== Memcheck, a memory error detector
==45628== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45628== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45628== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==45628== 
==45628== 
==45628== HEAP SUMMARY:
==45628==     in use at exit: 0 bytes in 0 blocks
==45628==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==45628== 
==45628== All heap blocks were freed -- no leaks are possible
==45628== 
==45628== For counts of detected and suppressed errors, rerun with: -v
==45628== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45633== Memcheck, a memory error detector
==45633== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45633== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45633== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==45633== 
==45633== 
==45633== HEAP SUMMARY:
==45633==     in use at exit: 0 bytes in 0 blocks
==45633==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==45633== 
==45633== All heap blocks were freed -- no leaks are possible
==45633== 
==45633== For counts of detected and suppressed errors, rerun with: -v
==45633== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45637== Memcheck, a memory error detector
==45637== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45637== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45637== Command: ./test -r xml "List::reverse\ edge\ cases"
==45637== 
==45637== 
==45637== HEAP SUMMARY:
==45637==     in use at exit: 0 bytes in 0 blocks
==45637==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==45637== 
==45637== All heap blocks were freed -- no leaks are possible
==45637== 
==45637== For counts of detected and suppressed errors, rerun with: -v
==45637== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45645== Memcheck, a memory error detector
==45645== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45645== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45645== Command: ./test -r xml "List::insert\ contents\ #2"
==45645== 
==45645== 
==45645== HEAP SUMMARY:
==45645==     in use at exit: 0 bytes in 0 blocks
==45645==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==45645== 
==45645== All heap blocks were freed -- no leaks are possible
==45645== 
==45645== For counts of detected and suppressed errors, rerun with: -v
==45645== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45653== Memcheck, a memory error detector
==45653== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45653== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45653== Command: ./test -r xml "List::split\ edge\ cases"
==45653== 
==45653== 
==45653== HEAP SUMMARY:
==45653==     in use at exit: 0 bytes in 0 blocks
==45653==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==45653== 
==45653== All heap blocks were freed -- no leaks are possible
==45653== 
==45653== For counts of detected and suppressed errors, rerun with: -v
==45653== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **boynton3** using **9f41ed2504f5396df761b5bbbd4058b7bcd3ea1e** (from **March 2nd 2020, 11:59:59 pm**)
