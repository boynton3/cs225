


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==8617== Memcheck, a memory error detector
==8617== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8617== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8617== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==8617== 
==8617== 
==8617== HEAP SUMMARY:
==8617==     in use at exit: 0 bytes in 0 blocks
==8617==   total heap usage: 1,990 allocs, 1,990 frees, 235,968 bytes allocated
==8617== 
==8617== All heap blocks were freed -- no leaks are possible
==8617== 
==8617== For lists of detected and suppressed errors, rerun with: -s
==8617== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==8622== Memcheck, a memory error detector
==8622== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8622== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8622== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==8622== 
==8622== 
==8622== HEAP SUMMARY:
==8622==     in use at exit: 0 bytes in 0 blocks
==8622==   total heap usage: 2,045 allocs, 2,045 frees, 241,032 bytes allocated
==8622== 
==8622== All heap blocks were freed -- no leaks are possible
==8622== 
==8622== For lists of detected and suppressed errors, rerun with: -s
==8622== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> a
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==8625== Memcheck, a memory error detector
==8625== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8625== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8625== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==8625== 
==8625== 
==8625== HEAP SUMMARY:
==8625==     in use at exit: 0 bytes in 0 blocks
==8625==   total heap usage: 1,990 allocs, 1,990 frees, 235,968 bytes allocated
==8625== 
==8625== All heap blocks were freed -- no leaks are possible
==8625== 
==8625== For lists of detected and suppressed errors, rerun with: -s
==8625== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==8628== Memcheck, a memory error detector
==8628== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8628== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8628== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==8628== 
==8628== 
==8628== HEAP SUMMARY:
==8628==     in use at exit: 0 bytes in 0 blocks
==8628==   total heap usage: 2,045 allocs, 2,045 frees, 240,840 bytes allocated
==8628== 
==8628== All heap blocks were freed -- no leaks are possible
==8628== 
==8628== For lists of detected and suppressed errors, rerun with: -s
==8628== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> a
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==8631== Memcheck, a memory error detector
==8631== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8631== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8631== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==8631== 
==8631== 
==8631== HEAP SUMMARY:
==8631==     in use at exit: 0 bytes in 0 blocks
==8631==   total heap usage: 2,140 allocs, 2,140 frees, 253,552 bytes allocated
==8631== 
==8631== All heap blocks were freed -- no leaks are possible
==8631== 
==8631== For lists of detected and suppressed errors, rerun with: -s
==8631== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> a
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==8634== Memcheck, a memory error detector
==8634== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8634== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8634== Command: ./test -r xml "Testing\ simple\ backflow"
==8634== 
==8634== 
==8634== HEAP SUMMARY:
==8634==     in use at exit: 0 bytes in 0 blocks
==8634==   total heap usage: 2,106 allocs, 2,106 frees, 246,664 bytes allocated
==8634== 
==8634== All heap blocks were freed -- no leaks are possible
==8634== 
==8634== For lists of detected and suppressed errors, rerun with: -s
==8634== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> b
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==8638== Memcheck, a memory error detector
==8638== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8638== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8638== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==8638== 
==8638== 
==8638== HEAP SUMMARY:
==8638==     in use at exit: 0 bytes in 0 blocks
==8638==   total heap usage: 2,142 allocs, 2,142 frees, 253,816 bytes allocated
==8638== 
==8638== All heap blocks were freed -- no leaks are possible
==8638== 
==8638== For lists of detected and suppressed errors, rerun with: -s
==8638== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge e -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> e
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge e -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> e
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==8642== Memcheck, a memory error detector
==8642== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8642== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8642== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==8642== 
==8642== 
==8642== HEAP SUMMARY:
==8642==     in use at exit: 0 bytes in 0 blocks
==8642==   total heap usage: 2,156 allocs, 2,156 frees, 252,136 bytes allocated
==8642== 
==8642== All heap blocks were freed -- no leaks are possible
==8642== 
==8642== For lists of detected and suppressed errors, rerun with: -s
==8642== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge e -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> e
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge e -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> e
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==8646== Memcheck, a memory error detector
==8646== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8646== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8646== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==8646== 
==8646== 
==8646== HEAP SUMMARY:
==8646==     in use at exit: 0 bytes in 0 blocks
==8646==   total heap usage: 2,227 allocs, 2,227 frees, 261,752 bytes allocated
==8646== 
==8646== All heap blocks were freed -- no leaks are possible
==8646== 
==8646== For lists of detected and suppressed errors, rerun with: -s
==8646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge i -> f
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge e -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> e
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge i -> f
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge g -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge h -> g
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge i -> h
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==8688== Memcheck, a memory error detector
==8688== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8688== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==8688== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==8688== 
==8688== 
==8688== HEAP SUMMARY:
==8688==     in use at exit: 0 bytes in 0 blocks
==8688==   total heap usage: 2,238 allocs, 2,238 frees, 261,936 bytes allocated
==8688== 
==8688== All heap blocks were freed -- no leaks are possible
==8688== 
==8688== For lists of detected and suppressed errors, rerun with: -s
==8688== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true">
        <StdErr>
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge c -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> c
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge i -> f
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge b -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge e -> b
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> e
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge i -> f
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge e -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge f -> e
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge i -> f
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge d -> a
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge g -> d
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge h -> g
\x1B[1;31m[Graph Error]\x1B[0m getEdgeWeight called on nonexistent edge i -> h
        </StdErr>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **b4e8197f6d4ee6b23dbe3ee9c15030f8e8234c28** (from **May 6th 2020, 11:59:59 pm**)
