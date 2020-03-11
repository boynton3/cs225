


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c huffman_tree.cpp -o .objs/huffman_tree.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c frequency.cpp -o .objs/frequency.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c encoder.cpp -o .objs/encoder.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c decoder.cpp -o .objs/decoder.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c binary_file_writer.cpp -o .objs/binary_file_writer.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c binary_file_reader.cpp -o .objs/binary_file_reader.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/huffman_tree.o .objs/frequency.o .objs/encoder.o .objs/decoder.o .objs/binary_file_writer.o .objs/binary_file_reader.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - test_remove_smallest

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_binary

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_binary2

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_writetree

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_writetree2

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode2

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode_readtree

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode_readtree2

- **Points**: 1 / 1





### ✓ - [5/5] - test_the_works

- **Points**: 5 / 5

```
==367== Memcheck, a memory error detector
==367== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==367== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==367== Command: ./test -r xml "test_the_works"
==367== 
==367== 
==367== HEAP SUMMARY:
==367==     in use at exit: 0 bytes in 0 blocks
==367==   total heap usage: 1,903 allocs, 1,903 frees, 305,504 bytes allocated
==367== 
==367== All heap blocks were freed -- no leaks are possible
==367== 
==367== For counts of detected and suppressed errors, rerun with: -v
==367== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_the_works" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="162">
      <OverallResult success="true">
        <StdOut>
Printing generated HuffmanTree...
                                                _____________ \xF9:63 ____________                                                  
                                 ______________/                               \______________                                   
                        _____ \x94:31 ____                                                       e:32                               
                 ______/               \______                                                                                   
            _ 0:15                            d:16                                                                               
         __/       \__                                                                                                           
      \xCD:7             c:8                                                                                                        
     /   \                                                                                                                       
  k:3     b:4                                                                                                                    
  / \                                                                                                                            
\n:1a:2                                                                                                                          
Saving HuffmanTree to file...
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **boynton3** using **b811daa6191d4a67ad91da6b8454cb5c256b16c3** (from **March 8th 2020, 11:59:59 pm**)
