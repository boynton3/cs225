


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
==2328== Memcheck, a memory error detector
==2328== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2328== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2328== Command: ./test -r xml "List::insertFront\ size"
==2328== 
==2328== 
==2328== HEAP SUMMARY:
==2328==     in use at exit: 0 bytes in 0 blocks
==2328==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==2328== 
==2328== All heap blocks were freed -- no leaks are possible
==2328== 
==2328== For counts of detected and suppressed errors, rerun with: -v
==2328== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2334== Memcheck, a memory error detector
==2334== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2334== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2334== Command: ./test -r xml "List::insertBack\ size"
==2334== 
==2334== 
==2334== HEAP SUMMARY:
==2334==     in use at exit: 0 bytes in 0 blocks
==2334==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==2334== 
==2334== All heap blocks were freed -- no leaks are possible
==2334== 
==2334== For counts of detected and suppressed errors, rerun with: -v
==2334== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2340== Memcheck, a memory error detector
==2340== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2340== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2340== Command: ./test -r xml "List::insert\ contents"
==2340== 
==2340== 
==2340== HEAP SUMMARY:
==2340==     in use at exit: 0 bytes in 0 blocks
==2340==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==2340== 
==2340== All heap blocks were freed -- no leaks are possible
==2340== 
==2340== For counts of detected and suppressed errors, rerun with: -v
==2340== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2389== Memcheck, a memory error detector
==2389== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2389== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2389== Command: ./test -r xml "List::triplerotate\ basic"
==2389== 
==2389== 
==2389== HEAP SUMMARY:
==2389==     in use at exit: 0 bytes in 0 blocks
==2389==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==2389== 
==2389== All heap blocks were freed -- no leaks are possible
==2389== 
==2389== For counts of detected and suppressed errors, rerun with: -v
==2389== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2413== Memcheck, a memory error detector
==2413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2413== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2413== Command: ./test -r xml "List::_destroy\ empty\ list"
==2413== 
==2413== 
==2413== HEAP SUMMARY:
==2413==     in use at exit: 0 bytes in 0 blocks
==2413==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==2413== 
==2413== All heap blocks were freed -- no leaks are possible
==2413== 
==2413== For counts of detected and suppressed errors, rerun with: -v
==2413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2466== Memcheck, a memory error detector
==2466== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2466== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2466== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==2466== 
==2466== 
==2466== HEAP SUMMARY:
==2466==     in use at exit: 0 bytes in 0 blocks
==2466==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==2466== 
==2466== All heap blocks were freed -- no leaks are possible
==2466== 
==2466== For counts of detected and suppressed errors, rerun with: -v
==2466== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2473== Memcheck, a memory error detector
==2473== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2473== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2473== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==2473== 
==2473== 
==2473== HEAP SUMMARY:
==2473==     in use at exit: 0 bytes in 0 blocks
==2473==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==2473== 
==2473== All heap blocks were freed -- no leaks are possible
==2473== 
==2473== For counts of detected and suppressed errors, rerun with: -v
==2473== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2482== Memcheck, a memory error detector
==2482== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2482== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2482== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==2482== 
==2482== 
==2482== HEAP SUMMARY:
==2482==     in use at exit: 0 bytes in 0 blocks
==2482==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==2482== 
==2482== All heap blocks were freed -- no leaks are possible
==2482== 
==2482== For counts of detected and suppressed errors, rerun with: -v
==2482== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2496== Memcheck, a memory error detector
==2496== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2496== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2496== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==2496== 
==2496== 
==2496== HEAP SUMMARY:
==2496==     in use at exit: 0 bytes in 0 blocks
==2496==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==2496== 
==2496== All heap blocks were freed -- no leaks are possible
==2496== 
==2496== For counts of detected and suppressed errors, rerun with: -v
==2496== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2502== Memcheck, a memory error detector
==2502== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2502== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2502== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==2502== 
==2502== 
==2502== HEAP SUMMARY:
==2502==     in use at exit: 0 bytes in 0 blocks
==2502==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==2502== 
==2502== All heap blocks were freed -- no leaks are possible
==2502== 
==2502== For counts of detected and suppressed errors, rerun with: -v
==2502== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2552== Memcheck, a memory error detector
==2552== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2552== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2552== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==2552== 
==2552== 
==2552== HEAP SUMMARY:
==2552==     in use at exit: 0 bytes in 0 blocks
==2552==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==2552== 
==2552== All heap blocks were freed -- no leaks are possible
==2552== 
==2552== For counts of detected and suppressed errors, rerun with: -v
==2552== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2557== Memcheck, a memory error detector
==2557== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2557== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2557== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==2557== 
==2557== 
==2557== HEAP SUMMARY:
==2557==     in use at exit: 0 bytes in 0 blocks
==2557==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==2557== 
==2557== All heap blocks were freed -- no leaks are possible
==2557== 
==2557== For counts of detected and suppressed errors, rerun with: -v
==2557== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2565== Memcheck, a memory error detector
==2565== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2565== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2565== Command: ./test -r xml "List::reverse\ edge\ cases"
==2565== 
==2565== 
==2565== HEAP SUMMARY:
==2565==     in use at exit: 0 bytes in 0 blocks
==2565==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==2565== 
==2565== All heap blocks were freed -- no leaks are possible
==2565== 
==2565== For counts of detected and suppressed errors, rerun with: -v
==2565== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2589== Memcheck, a memory error detector
==2589== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2589== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2589== Command: ./test -r xml "List::insert\ contents\ #2"
==2589== 
==2589== 
==2589== HEAP SUMMARY:
==2589==     in use at exit: 0 bytes in 0 blocks
==2589==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==2589== 
==2589== All heap blocks were freed -- no leaks are possible
==2589== 
==2589== For counts of detected and suppressed errors, rerun with: -v
==2589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2595== Memcheck, a memory error detector
==2595== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2595== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2595== Command: ./test -r xml "List::split\ edge\ cases"
==2595== 
==2595== 
==2595== HEAP SUMMARY:
==2595==     in use at exit: 0 bytes in 0 blocks
==2595==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==2595== 
==2595== All heap blocks were freed -- no leaks are possible
==2595== 
==2595== For counts of detected and suppressed errors, rerun with: -v
==2595== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
