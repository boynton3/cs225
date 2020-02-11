


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
Image.cpp:8:17: fatal error: cannot define or redeclare 'lighten' here because namespace 'std' does not enclose namespace 'Image'
    void Image::lighten() {
         ~~~~~~~^
1 error generated.
make: *** [.objs/Image.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o

```


---

This report was generated for **boynton3** using **a81c327226aafd179a7c3ad046b85bd760548bb1** (from **February 11th 2020, 12:00:00 am**)
