


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==8141== Memcheck, a memory error detector
==8141== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8141== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8141== Command: ./test -r xml "sumDigits"
==8141== 
==8141== 
==8141== HEAP SUMMARY:
==8141==     in use at exit: 0 bytes in 0 blocks
==8141==   total heap usage: 1,689 allocs, 1,689 frees, 218,344 bytes allocated
==8141== 
==8141== All heap blocks were freed -- no leaks are possible
==8141== 
==8141== For counts of detected and suppressed errors, rerun with: -v
==8141== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==8145== Memcheck, a memory error detector
==8145== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8145== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8145== Command: ./test -r xml "triangle"
==8145== 
==8145== 
==8145== HEAP SUMMARY:
==8145==     in use at exit: 0 bytes in 0 blocks
==8145==   total heap usage: 1,675 allocs, 1,675 frees, 217,896 bytes allocated
==8145== 
==8145== All heap blocks were freed -- no leaks are possible
==8145== 
==8145== For counts of detected and suppressed errors, rerun with: -v
==8145== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==8148== Memcheck, a memory error detector
==8148== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8148== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8148== Command: ./test -r xml "sum"
==8148== 
==8148== 
==8148== HEAP SUMMARY:
==8148==     in use at exit: 0 bytes in 0 blocks
==8148==   total heap usage: 1,772 allocs, 1,772 frees, 304,040 bytes allocated
==8148== 
==8148== All heap blocks were freed -- no leaks are possible
==8148== 
==8148== For counts of detected and suppressed errors, rerun with: -v
==8148== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Did not globally/statically declare stack" filename="tests/basic.cpp" line="51">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Sum is correct" filename="tests/basic.cpp" line="61">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="64">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="68">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="79">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="85">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="89">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="7" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="7" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==8151== Memcheck, a memory error detector
==8151== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8151== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8151== Command: ./test -r xml "isBalanced"
==8151== 
==8151== 
==8151== HEAP SUMMARY:
==8151==     in use at exit: 0 bytes in 0 blocks
==8151==   total heap usage: 1,754 allocs, 1,754 frees, 318,896 bytes allocated
==8151== 
==8151== All heap blocks were freed -- no leaks are possible
==8151== 
==8151== For counts of detected and suppressed errors, rerun with: -v
==8151== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="97">
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="99">
        <Section name="Did not globally/statically declare stack or queue" filename="tests/basic.cpp" line="101">
          <OverallResults successes="2" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="4" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="balanced" filename="tests/basic.cpp" line="117">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="133">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="16" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="16" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==8157== Memcheck, a memory error detector
==8157== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8157== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8157== Command: ./test -r xml "scramble\ 17"
==8157== 
==8157== 
==8157== HEAP SUMMARY:
==8157==     in use at exit: 0 bytes in 0 blocks
==8157==   total heap usage: 1,687 allocs, 1,687 frees, 230,816 bytes allocated
==8157== 
==8157== All heap blocks were freed -- no leaks are possible
==8157== 
==8157== For counts of detected and suppressed errors, rerun with: -v
==8157== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="151">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==8161== Memcheck, a memory error detector
==8161== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8161== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8161== Command: ./test -r xml "scramble\ 9"
==8161== 
==8161== 
==8161== HEAP SUMMARY:
==8161==     in use at exit: 0 bytes in 0 blocks
==8161==   total heap usage: 1,682 allocs, 1,682 frees, 230,144 bytes allocated
==8161== 
==8161== All heap blocks were freed -- no leaks are possible
==8161== 
==8161== For counts of detected and suppressed errors, rerun with: -v
==8161== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="179">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **b72ecd92c3ffc97a51c1d623c39d2815a28dbd9e** (from **February 23rd 2020, 11:59:59 pm**)
