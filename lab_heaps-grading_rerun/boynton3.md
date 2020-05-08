


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
==34367== Memcheck, a memory error detector
==34367== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34367== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34367== Command: ./test -r xml "test_heapify_down_1"
==34367== 
==34367== 
==34367== HEAP SUMMARY:
==34367==     in use at exit: 0 bytes in 0 blocks
==34367==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==34367== 
==34367== All heap blocks were freed -- no leaks are possible
==34367== 
==34367== For lists of detected and suppressed errors, rerun with: -s
==34367== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34374== Memcheck, a memory error detector
==34374== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34374== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34374== Command: ./test -r xml "test_heapify_down_2"
==34374== 
==34374== 
==34374== HEAP SUMMARY:
==34374==     in use at exit: 0 bytes in 0 blocks
==34374==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==34374== 
==34374== All heap blocks were freed -- no leaks are possible
==34374== 
==34374== For lists of detected and suppressed errors, rerun with: -s
==34374== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34379== Memcheck, a memory error detector
==34379== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34379== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34379== Command: ./test -r xml "test_heapify_down_3"
==34379== 
==34379== 
==34379== HEAP SUMMARY:
==34379==     in use at exit: 0 bytes in 0 blocks
==34379==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==34379== 
==34379== All heap blocks were freed -- no leaks are possible
==34379== 
==34379== For lists of detected and suppressed errors, rerun with: -s
==34379== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34387== Memcheck, a memory error detector
==34387== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34387== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34387== Command: ./test -r xml "test_heapify_down_4"
==34387== 
==34387== 
==34387== HEAP SUMMARY:
==34387==     in use at exit: 0 bytes in 0 blocks
==34387==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==34387== 
==34387== All heap blocks were freed -- no leaks are possible
==34387== 
==34387== For lists of detected and suppressed errors, rerun with: -s
==34387== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34392== Memcheck, a memory error detector
==34392== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34392== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34392== Command: ./test -r xml "test_heapify_down_5"
==34392== 
==34392== 
==34392== HEAP SUMMARY:
==34392==     in use at exit: 0 bytes in 0 blocks
==34392==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==34392== 
==34392== All heap blocks were freed -- no leaks are possible
==34392== 
==34392== For lists of detected and suppressed errors, rerun with: -s
==34392== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34396== Memcheck, a memory error detector
==34396== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34396== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34396== Command: ./test -r xml "test_heapify_down_6"
==34396== 
==34396== 
==34396== HEAP SUMMARY:
==34396==     in use at exit: 0 bytes in 0 blocks
==34396==   total heap usage: 1,868 allocs, 1,868 frees, 237,264 bytes allocated
==34396== 
==34396== All heap blocks were freed -- no leaks are possible
==34396== 
==34396== For lists of detected and suppressed errors, rerun with: -s
==34396== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34401== Memcheck, a memory error detector
==34401== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34401== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34401== Command: ./test -r xml "test_heapify_down_7"
==34401== 
==34401== 
==34401== HEAP SUMMARY:
==34401==     in use at exit: 0 bytes in 0 blocks
==34401==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==34401== 
==34401== All heap blocks were freed -- no leaks are possible
==34401== 
==34401== For lists of detected and suppressed errors, rerun with: -s
==34401== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34404== Memcheck, a memory error detector
==34404== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34404== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34404== Command: ./test -r xml "test_heapify_down_8"
==34404== 
==34404== 
==34404== HEAP SUMMARY:
==34404==     in use at exit: 0 bytes in 0 blocks
==34404==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==34404== 
==34404== All heap blocks were freed -- no leaks are possible
==34404== 
==34404== For lists of detected and suppressed errors, rerun with: -s
==34404== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34407== Memcheck, a memory error detector
==34407== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34407== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34407== Command: ./test -r xml "test_heapify_down_9"
==34407== 
==34407== 
==34407== HEAP SUMMARY:
==34407==     in use at exit: 0 bytes in 0 blocks
==34407==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==34407== 
==34407== All heap blocks were freed -- no leaks are possible
==34407== 
==34407== For lists of detected and suppressed errors, rerun with: -s
==34407== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34410== Memcheck, a memory error detector
==34410== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34410== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34410== Command: ./test -r xml "test_heapify_down_10"
==34410== 
==34410== 
==34410== HEAP SUMMARY:
==34410==     in use at exit: 0 bytes in 0 blocks
==34410==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==34410== 
==34410== All heap blocks were freed -- no leaks are possible
==34410== 
==34410== For lists of detected and suppressed errors, rerun with: -s
==34410== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34413== Memcheck, a memory error detector
==34413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34413== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34413== Command: ./test -r xml "test_build_heap_1"
==34413== 
==34413== 
==34413== HEAP SUMMARY:
==34413==     in use at exit: 0 bytes in 0 blocks
==34413==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==34413== 
==34413== All heap blocks were freed -- no leaks are possible
==34413== 
==34413== For lists of detected and suppressed errors, rerun with: -s
==34413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34417== Memcheck, a memory error detector
==34417== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34417== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34417== Command: ./test -r xml "test_build_heap_3"
==34417== 
==34417== 
==34417== HEAP SUMMARY:
==34417==     in use at exit: 0 bytes in 0 blocks
==34417==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==34417== 
==34417== All heap blocks were freed -- no leaks are possible
==34417== 
==34417== For lists of detected and suppressed errors, rerun with: -s
==34417== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34420== Memcheck, a memory error detector
==34420== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34420== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34420== Command: ./test -r xml "test_build_heap_4"
==34420== 
==34420== 
==34420== HEAP SUMMARY:
==34420==     in use at exit: 0 bytes in 0 blocks
==34420==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==34420== 
==34420== All heap blocks were freed -- no leaks are possible
==34420== 
==34420== For lists of detected and suppressed errors, rerun with: -s
==34420== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34425== Memcheck, a memory error detector
==34425== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34425== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34425== Command: ./test -r xml "test_build_heap_5"
==34425== 
==34425== Conditional jump or move depends on uninitialised value(s)
==34425==    at 0x448600: heap<int, std::__1::less<int> >::maxPriorityChild(unsigned long) const (heap.cpp:66)
==34425==    by 0x4475C6: heap<int, std::__1::less<int> >::heapifyDown(unsigned long) (heap.cpp:85)
==34425==    by 0x4471A7: heap<int, std::__1::less<int> >::heap(std::__1::vector<int, std::__1::allocator<int> > const&) (heap.cpp:127)
==34425==    by 0x42FA72: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:183)
==34425==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34425==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==34425==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34425==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34425==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34425==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34425==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==34425==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==34425== 
==34425== Conditional jump or move depends on uninitialised value(s)
==34425==    at 0x447642: heap<int, std::__1::less<int> >::heapifyDown(unsigned long) (heap.cpp:86)
==34425==    by 0x4471A7: heap<int, std::__1::less<int> >::heap(std::__1::vector<int, std::__1::allocator<int> > const&) (heap.cpp:127)
==34425==    by 0x42FA72: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:183)
==34425==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34425==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==34425==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34425==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34425==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34425==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34425==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==34425==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==34425==    by 0x46DD69: Catch::Session::run(int, char**) (catch.hpp:10074)
==34425== 
==34425== Conditional jump or move depends on uninitialised value(s)
==34425==    at 0x430753: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *>, std::__1::__equal_to<int, int> > (algorithm:1325)
==34425==    by 0x430753: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *> > (algorithm:1337)
==34425==    by 0x430753: operator==<int, std::__1::allocator<int> > (vector:3312)
==34425==    by 0x430753: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:188)
==34425==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34425==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==34425==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34425==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34425==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34425==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34425==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==34425==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==34425==    by 0x46DD69: Catch::Session::run(int, char**) (catch.hpp:10074)
==34425==    by 0x49ADE1: main (catch.hpp:13613)
==34425== 
==34425== Conditional jump or move depends on uninitialised value(s)
==34425==    at 0x430AB2: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *>, std::__1::__equal_to<int, int> > (algorithm:1325)
==34425==    by 0x430AB2: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *> > (algorithm:1337)
==34425==    by 0x430AB2: operator==<int, std::__1::allocator<int> > (vector:3312)
==34425==    by 0x430AB2: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:188)
==34425==    by 0x47AF32: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34425==    by 0x46B686: Catch::TestCase::invoke() const (catch.hpp:10793)
==34425==    by 0x46B5BC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34425==    by 0x467B16: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34425==    by 0x4660EE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34425==    by 0x46F486: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34425==    by 0x46E122: Catch::Session::runInternal() (catch.hpp:10149)
==34425==    by 0x46DDEA: Catch::Session::run() (catch.hpp:10106)
==34425==    by 0x46DD69: Catch::Session::run(int, char**) (catch.hpp:10074)
==34425==    by 0x49ADE1: main (catch.hpp:13613)
==34425== 
==34425== 
==34425== HEAP SUMMARY:
==34425==     in use at exit: 16 bytes in 1 blocks
==34425==   total heap usage: 1,888 allocs, 1,887 frees, 240,416 bytes allocated
==34425== 
==34425== LEAK SUMMARY:
==34425==    definitely lost: 0 bytes in 0 blocks
==34425==    indirectly lost: 0 bytes in 0 blocks
==34425==      possibly lost: 0 bytes in 0 blocks
==34425==    still reachable: 16 bytes in 1 blocks
==34425==         suppressed: 0 bytes in 0 blocks
==34425== Reachable blocks (those to which a pointer was found) are not shown.
==34425== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==34425== 
==34425== Use --track-origins=yes to see where uninitialised values come from
==34425== For lists of detected and suppressed errors, rerun with: -s
==34425== ERROR SUMMARY: 14 errors from 4 contexts (suppressed: 0 from 0)

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
==34447== Memcheck, a memory error detector
==34447== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34447== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34447== Command: ./test -r xml "test_update_elem_1"
==34447== 
==34447== 
==34447== HEAP SUMMARY:
==34447==     in use at exit: 0 bytes in 0 blocks
==34447==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==34447== 
==34447== All heap blocks were freed -- no leaks are possible
==34447== 
==34447== For lists of detected and suppressed errors, rerun with: -s
==34447== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34479== Memcheck, a memory error detector
==34479== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34479== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34479== Command: ./test -r xml "test_update_elem_2"
==34479== 
==34479== 
==34479== HEAP SUMMARY:
==34479==     in use at exit: 0 bytes in 0 blocks
==34479==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==34479== 
==34479== All heap blocks were freed -- no leaks are possible
==34479== 
==34479== For lists of detected and suppressed errors, rerun with: -s
==34479== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34486== Memcheck, a memory error detector
==34486== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34486== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34486== Command: ./test -r xml "test_update_elem_3"
==34486== 
==34486== 
==34486== HEAP SUMMARY:
==34486==     in use at exit: 0 bytes in 0 blocks
==34486==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==34486== 
==34486== All heap blocks were freed -- no leaks are possible
==34486== 
==34486== For lists of detected and suppressed errors, rerun with: -s
==34486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34490== Memcheck, a memory error detector
==34490== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34490== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34490== Command: ./test -r xml "test_update_elem_4"
==34490== 
==34490== 
==34490== HEAP SUMMARY:
==34490==     in use at exit: 0 bytes in 0 blocks
==34490==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==34490== 
==34490== All heap blocks were freed -- no leaks are possible
==34490== 
==34490== For lists of detected and suppressed errors, rerun with: -s
==34490== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==34495== Memcheck, a memory error detector
==34495== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34495== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==34495== Command: ./test -r xml "test_update_elem_5"
==34495== 
==34495== 
==34495== HEAP SUMMARY:
==34495==     in use at exit: 0 bytes in 0 blocks
==34495==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==34495== 
==34495== All heap blocks were freed -- no leaks are possible
==34495== 
==34495== For lists of detected and suppressed errors, rerun with: -s
==34495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **boynton3** using **b4e8197f6d4ee6b23dbe3ee9c15030f8e8234c28** (from **May 6th 2020, 11:59:59 pm**)
