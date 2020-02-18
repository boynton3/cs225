


## Score: 54/61 (88.52%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c StickerSheet.cpp -o .objs/StickerSheet.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/StickerSheet.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Image lighten() lightens pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image lighten() does not lighten a pixel above 1.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) darkens pixels by 0.2

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) does not darken a pixel below 0.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image saturate() saturates a pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) rotates the color

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) keeps the hue in the range 0..360

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2.0) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) results in the correct width/height

- **Points**: 1 / 1





### ✗ - [0/1] - Image scale(240\, 50) results in the correct width/height

- **Points**: 0 / 1


```
Original: img.height() * 0.5 == result.height()
Expanded: 50.0 == 0
```


### ✗ - [0/1] - Image scale(180\, 80) results in the correct width/height

- **Points**: 0 / 1


```
Original: img.height() * 0.5 == result.height()
Expanded: 50.0 == 0
```


### ✓ - [1/1] - Image scale(10000\, 200) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✗ - [0/1] - Image scale(240\, 50) scales pixel data in a reasonable way

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/1] - Image scale(180\, 80) scales pixel data in a reasonable way

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✓ - [3/3] - Image doesn't have any memory erorrs

- **Points**: 3 / 3

```
==34470== Memcheck, a memory error detector
==34470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34470== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34470== Command: ./test -r xml "Image\ doesn't\ have\ any\ memory\ erorrs"
==34470== 
==34470== 
==34470== HEAP SUMMARY:
==34470==     in use at exit: 0 bytes in 0 blocks
==34470==   total heap usage: 2,589 allocs, 2,589 frees, 333,480 bytes allocated
==34470== 
==34470== All heap blocks were freed -- no leaks are possible
==34470== 
==34470== For counts of detected and suppressed errors, rerun with: -v
==34470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Image doesn't have any memory erorrs" tags="[part=1][valgrind][weight=3]" filename="tests/tests-part1.cpp" line="231">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - A basic StickerSheet works

- **Points**: 5 / 5





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard stickers when resized larger

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard original stickers when resized smaller

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() can increase the number of stickers on an image

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() discards stickers beyond the end of a smaller StickerSheet

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the last sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the first sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove all stickers

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns the sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a removed sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() translates a sticker's location

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() returns false for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [5/5] - A complex StickerSheet is correct

- **Points**: 5 / 5





### ✓ - [2/2] - StickerSheet's copy constructor makes an independent copy

- **Points**: 2 / 2





### ✓ - [2/2] - StickerSheet's assignment operator makes an independent copy

- **Points**: 2 / 2





### ✗ - [0/3] - StickerSheet doesn't have any memory errors

- **Points**: 0 / 3

```
==34504== Memcheck, a memory error detector
==34504== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==34504== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==34504== Command: ./test -r xml "StickerSheet\ doesn't\ have\ any\ memory\ errors"
==34504== 
==34504== 
==34504== HEAP SUMMARY:
==34504==     in use at exit: 58,935,288 bytes in 24 blocks
==34504==   total heap usage: 3,465 allocs, 3,441 frees, 288,735,856 bytes allocated
==34504== 
==34504== 16 bytes in 1 blocks are definitely lost in loss record 1 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x40A1C4: StickerSheet::render() const (StickerSheet.cpp:213)
==34504==    by 0x43323B: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:273)
==34504==    by 0x4334F6: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:295)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34504==    by 0x45645E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34504==    by 0x45F7F6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34504==    by 0x45E492: Catch::Session::runInternal() (catch.hpp:10149)
==34504== 
==34504== 16 bytes in 1 blocks are definitely lost in loss record 2 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x40A1C4: StickerSheet::render() const (StickerSheet.cpp:213)
==34504==    by 0x43323B: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:273)
==34504==    by 0x433537: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:299)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34504==    by 0x45645E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34504==    by 0x45F7F6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34504==    by 0x45E492: Catch::Session::runInternal() (catch.hpp:10149)
==34504== 
==34504== 20 bytes in 1 blocks are definitely lost in loss record 3 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x409668: StickerSheet::StickerSheet(Image const&, unsigned int) (StickerSheet.cpp:14)
==34504==    by 0x433461: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:284)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34504==    by 0x45645E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34504==    by 0x45F7F6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34504==    by 0x45E492: Catch::Session::runInternal() (catch.hpp:10149)
==34504==    by 0x45E15A: Catch::Session::run() (catch.hpp:10106)
==34504== 
==34504== 20 bytes in 1 blocks are definitely lost in loss record 4 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x40969F: StickerSheet::StickerSheet(Image const&, unsigned int) (StickerSheet.cpp:15)
==34504==    by 0x433461: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:284)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34504==    by 0x45645E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34504==    by 0x45F7F6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34504==    by 0x45E492: Catch::Session::runInternal() (catch.hpp:10149)
==34504==    by 0x45E15A: Catch::Session::run() (catch.hpp:10106)
==34504== 
==34504== 20 bytes in 1 blocks are definitely lost in loss record 5 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x4099D4: StickerSheet::_copy(StickerSheet const&) (StickerSheet.cpp:337)
==34504==    by 0x4098FC: StickerSheet::StickerSheet(StickerSheet const&) (StickerSheet.cpp:44)
==34504==    by 0x4334AC: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:288)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34504==    by 0x45645E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34504==    by 0x45F7F6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34504==    by 0x45E492: Catch::Session::runInternal() (catch.hpp:10149)
==34504== 
==34504== 20 bytes in 1 blocks are definitely lost in loss record 6 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x409A0A: StickerSheet::_copy(StickerSheet const&) (StickerSheet.cpp:338)
==34504==    by 0x4098FC: StickerSheet::StickerSheet(StickerSheet const&) (StickerSheet.cpp:44)
==34504==    by 0x4334AC: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:288)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34504==    by 0x45645E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34504==    by 0x45F7F6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34504==    by 0x45E492: Catch::Session::runInternal() (catch.hpp:10149)
==34504== 
==34504== 20 bytes in 1 blocks are definitely lost in loss record 7 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x4099D4: StickerSheet::_copy(StickerSheet const&) (StickerSheet.cpp:337)
==34504==    by 0x409B5C: StickerSheet::operator=(StickerSheet const&) (StickerSheet.cpp:54)
==34504==    by 0x4334DE: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:292)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==34504==    by 0x45645E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==34504==    by 0x45F7F6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==34504==    by 0x45E492: Catch::Session::runInternal() (catch.hpp:10149)
==34504== 
==34504== 20 bytes in 1 blocks are definitely lost in loss record 8 of 24
==34504==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==34504==    by 0x4E53F8B: operator new(unsigned long) (stdlib_new_delete.cpp:33)
==34504==    by 0x409A0A: StickerSheet::_copy(StickerSheet const&) (StickerSheet.cpp:338)
==34504==    by 0x409B5C: StickerSheet::operator=(StickerSheet const&) (StickerSheet.cpp:54)
==34504==    by 0x4334DE: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:292)
==34504==    by 0x46B2A2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==34504==    by 0x45B9F6: Catch::TestCase::invoke() const (catch.hpp:10793)
==34504==    by 0x45B92C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==34504==    by 0x457E86: Catch::RunContext::runCurrentTest(std::__1::bas
```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="StickerSheet doesn't have any memory errors" tags="[part=2][timeout=20000][valgrind][weight=3]" filename="tests/tests-part2.cpp" line="279">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - myImage.png exists and contains stickers

- **Points**: 10 / 10





---

This report was generated for **boynton3** using **800e743ee9e461a85888bf054508917c7161154b** (from **February 17th 2020, 11:59:59 pm**)
