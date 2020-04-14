


## Score: 18/20 (90.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==44489== Memcheck, a memory error detector
==44489== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44489== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44489== Command: ./test -r xml "test_heapify_down_1"
==44489== 
==44489== 
==44489== HEAP SUMMARY:
==44489==     in use at exit: 0 bytes in 0 blocks
==44489==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==44489== 
==44489== All heap blocks were freed -- no leaks are possible
==44489== 
==44489== For counts of detected and suppressed errors, rerun with: -v
==44489== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==44492== Memcheck, a memory error detector
==44492== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44492== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44492== Command: ./test -r xml "test_heapify_down_2"
==44492== 
==44492== 
==44492== HEAP SUMMARY:
==44492==     in use at exit: 0 bytes in 0 blocks
==44492==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==44492== 
==44492== All heap blocks were freed -- no leaks are possible
==44492== 
==44492== For counts of detected and suppressed errors, rerun with: -v
==44492== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==44495== Memcheck, a memory error detector
==44495== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44495== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44495== Command: ./test -r xml "test_heapify_down_3"
==44495== 
==44495== 
==44495== HEAP SUMMARY:
==44495==     in use at exit: 0 bytes in 0 blocks
==44495==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==44495== 
==44495== All heap blocks were freed -- no leaks are possible
==44495== 
==44495== For counts of detected and suppressed errors, rerun with: -v
==44495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==44515== Memcheck, a memory error detector
==44515== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44515== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44515== Command: ./test -r xml "test_heapify_down_4"
==44515== 
==44515== 
==44515== HEAP SUMMARY:
==44515==     in use at exit: 0 bytes in 0 blocks
==44515==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==44515== 
==44515== All heap blocks were freed -- no leaks are possible
==44515== 
==44515== For counts of detected and suppressed errors, rerun with: -v
==44515== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==44525== Memcheck, a memory error detector
==44525== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44525== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44525== Command: ./test -r xml "test_heapify_down_5"
==44525== 
==44525== 
==44525== HEAP SUMMARY:
==44525==     in use at exit: 0 bytes in 0 blocks
==44525==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==44525== 
==44525== All heap blocks were freed -- no leaks are possible
==44525== 
==44525== For counts of detected and suppressed errors, rerun with: -v
==44525== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==44533== Memcheck, a memory error detector
==44533== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44533== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44533== Command: ./test -r xml "test_heapify_down_6"
==44533== 
==44533== 
==44533== HEAP SUMMARY:
==44533==     in use at exit: 0 bytes in 0 blocks
==44533==   total heap usage: 1,868 allocs, 1,868 frees, 237,264 bytes allocated
==44533== 
==44533== All heap blocks were freed -- no leaks are possible
==44533== 
==44533== For counts of detected and suppressed errors, rerun with: -v
==44533== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==44536== Memcheck, a memory error detector
==44536== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44536== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44536== Command: ./test -r xml "test_heapify_down_7"
==44536== 
==44536== 
==44536== HEAP SUMMARY:
==44536==     in use at exit: 0 bytes in 0 blocks
==44536==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==44536== 
==44536== All heap blocks were freed -- no leaks are possible
==44536== 
==44536== For counts of detected and suppressed errors, rerun with: -v
==44536== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==44539== Memcheck, a memory error detector
==44539== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44539== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44539== Command: ./test -r xml "test_heapify_down_8"
==44539== 
==44539== 
==44539== HEAP SUMMARY:
==44539==     in use at exit: 0 bytes in 0 blocks
==44539==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==44539== 
==44539== All heap blocks were freed -- no leaks are possible
==44539== 
==44539== For counts of detected and suppressed errors, rerun with: -v
==44539== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==44544== Memcheck, a memory error detector
==44544== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44544== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44544== Command: ./test -r xml "test_heapify_down_9"
==44544== 
==44544== 
==44544== HEAP SUMMARY:
==44544==     in use at exit: 0 bytes in 0 blocks
==44544==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==44544== 
==44544== All heap blocks were freed -- no leaks are possible
==44544== 
==44544== For counts of detected and suppressed errors, rerun with: -v
==44544== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==44547== Memcheck, a memory error detector
==44547== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44547== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44547== Command: ./test -r xml "test_heapify_down_10"
==44547== 
==44547== 
==44547== HEAP SUMMARY:
==44547==     in use at exit: 0 bytes in 0 blocks
==44547==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==44547== 
==44547== All heap blocks were freed -- no leaks are possible
==44547== 
==44547== For counts of detected and suppressed errors, rerun with: -v
==44547== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==44554== Memcheck, a memory error detector
==44554== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44554== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44554== Command: ./test -r xml "test_build_heap_1"
==44554== 
==44554== 
==44554== HEAP SUMMARY:
==44554==     in use at exit: 0 bytes in 0 blocks
==44554==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==44554== 
==44554== All heap blocks were freed -- no leaks are possible
==44554== 
==44554== For counts of detected and suppressed errors, rerun with: -v
==44554== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - test_build_heap_2

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <Expression success="false" type="REQUIRE" filename="tests/tests.cpp" line="150">
        <Original>
          matches == true
        </Original>
        <Expanded>
          false == true
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==44560== Memcheck, a memory error detector
==44560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44560== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44560== Command: ./test -r xml "test_build_heap_3"
==44560== 
==44560== 
==44560== HEAP SUMMARY:
==44560==     in use at exit: 0 bytes in 0 blocks
==44560==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==44560== 
==44560== All heap blocks were freed -- no leaks are possible
==44560== 
==44560== For counts of detected and suppressed errors, rerun with: -v
==44560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==44565== Memcheck, a memory error detector
==44565== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44565== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44565== Command: ./test -r xml "test_build_heap_4"
==44565== 
==44565== 
==44565== HEAP SUMMARY:
==44565==     in use at exit: 0 bytes in 0 blocks
==44565==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==44565== 
==44565== All heap blocks were freed -- no leaks are possible
==44565== 
==44565== For counts of detected and suppressed errors, rerun with: -v
==44565== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - test_build_heap_5

- **Points**: 0 / 1

```
==44587== Memcheck, a memory error detector
==44587== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44587== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44587== Command: ./test -r xml "test_build_heap_5"
==44587== 
==44587== Conditional jump or move depends on uninitialised value(s)
==44587==    at 0x448600: heap<int, std::__1::less<int> >::maxPriorityChild(unsigned long) const (heap.cpp:66)
==44587==    by 0x4475C6: heap<int, std::__1::less<int> >::heapifyDown(unsigned long) (heap.cpp:85)
==44587==    by 0x4471A7: heap<int, std::__1::less<int> >::heap(std::__1::vector<int, std::__1::allocator<int> > const&) (heap.cpp:127)
==44587==    by 0x42FA72: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:183)
==44587==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==44587==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==44587==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==44587==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==44587==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==44587==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==44587==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==44587==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==44587== 
==44587== Conditional jump or move depends on uninitialised value(s)
==44587==    at 0x447642: heap<int, std::__1::less<int> >::heapifyDown(unsigned long) (heap.cpp:86)
==44587==    by 0x4471A7: heap<int, std::__1::less<int> >::heap(std::__1::vector<int, std::__1::allocator<int> > const&) (heap.cpp:127)
==44587==    by 0x42FA72: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:183)
==44587==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==44587==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==44587==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==44587==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==44587==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==44587==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==44587==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==44587==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==44587==    by 0x46DD69: Catch::Session::run(int, char**) (catch.hpp:10074)
==44587== 
==44587== Conditional jump or move depends on uninitialised value(s)
==44587==    at 0x430753: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *>, std::__1::__equal_to<int, int> > (algorithm:1325)
==44587==    by 0x430753: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *> > (algorithm:1337)
==44587==    by 0x430753: operator==<int, std::__1::allocator<int> > (vector:3312)
==44587==    by 0x430753: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:188)
==44587==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==44587==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==44587==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==44587==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==44587==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==44587==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==44587==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==44587==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==44587==    by 0x46DD69: Catch::Session::run(int, char**) (catch.hpp:10074)
==44587==    by 0x49ADE1: main (catch.hpp:13613)
==44587== 
==44587== Conditional jump or move depends on uninitialised value(s)
==44587==    at 0x430AB2: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *>, std::__1::__equal_to<int, int> > (algorithm:1325)
==44587==    by 0x430AB2: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *> > (algorithm:1337)
==44587==    by 0x430AB2: operator==<int, std::__1::allocator<int> > (vector:3312)
==44587==    by 0x430AB2: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:188)
==44587==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==44587==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==44587==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==44587==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==44587==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==44587==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==44587==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==44587==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==44587==    by 0x46DD69: Catch::Session::run(int, char**) (catch.hpp:10074)
==44587==    by 0x49ADE1: main (catch.hpp:13613)
==44587== 
==44587== 
==44587== HEAP SUMMARY:
==44587==     in use at exit: 16 bytes in 1 blocks
==44587==   total heap usage: 1,888 allocs, 1,887 frees, 240,416 bytes allocated
==44587== 
==44587== LEAK SUMMARY:
==44587==    definitely lost: 0 bytes in 0 blocks
==44587==    indirectly lost: 0 bytes in 0 blocks
==44587==      possibly lost: 0 bytes in 0 blocks
==44587==    still reachable: 16 bytes in 1 blocks
==44587==         suppressed: 0 bytes in 0 blocks
==44587== Reachable blocks (those to which a pointer was found) are not shown.
==44587== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==44587== 
==44587== For counts of detected and suppressed errors, rerun with: -v
==44587== Use --track-origins=yes to see where uninitialised values come from
==44587== ERROR SUMMARY: 14 errors from 4 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <Expression success="false" type="REQUIRE" filename="tests/tests.cpp" line="189">
        <Original>
          matches == true
        </Original>
        <Expanded>
          false == true
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==44592== Memcheck, a memory error detector
==44592== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44592== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44592== Command: ./test -r xml "test_update_elem_1"
==44592== 
==44592== 
==44592== HEAP SUMMARY:
==44592==     in use at exit: 0 bytes in 0 blocks
==44592==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==44592== 
==44592== All heap blocks were freed -- no leaks are possible
==44592== 
==44592== For counts of detected and suppressed errors, rerun with: -v
==44592== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==44606== Memcheck, a memory error detector
==44606== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44606== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44606== Command: ./test -r xml "test_update_elem_2"
==44606== 
==44606== 
==44606== HEAP SUMMARY:
==44606==     in use at exit: 0 bytes in 0 blocks
==44606==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==44606== 
==44606== All heap blocks were freed -- no leaks are possible
==44606== 
==44606== For counts of detected and suppressed errors, rerun with: -v
==44606== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==44609== Memcheck, a memory error detector
==44609== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44609== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44609== Command: ./test -r xml "test_update_elem_3"
==44609== 
==44609== 
==44609== HEAP SUMMARY:
==44609==     in use at exit: 0 bytes in 0 blocks
==44609==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==44609== 
==44609== All heap blocks were freed -- no leaks are possible
==44609== 
==44609== For counts of detected and suppressed errors, rerun with: -v
==44609== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==44620== Memcheck, a memory error detector
==44620== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44620== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44620== Command: ./test -r xml "test_update_elem_4"
==44620== 
==44620== 
==44620== HEAP SUMMARY:
==44620==     in use at exit: 0 bytes in 0 blocks
==44620==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==44620== 
==44620== All heap blocks were freed -- no leaks are possible
==44620== 
==44620== For counts of detected and suppressed errors, rerun with: -v
==44620== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==44623== Memcheck, a memory error detector
==44623== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44623== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44623== Command: ./test -r xml "test_update_elem_5"
==44623== 
==44623== 
==44623== HEAP SUMMARY:
==44623==     in use at exit: 0 bytes in 0 blocks
==44623==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==44623== 
==44623== All heap blocks were freed -- no leaks are possible
==44623== 
==44623== For counts of detected and suppressed errors, rerun with: -v
==44623== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **2332f50ca772b125a19f999b3c02764d9f1c77fe** (from **April 13th 2020, 11:59:59 pm**)
