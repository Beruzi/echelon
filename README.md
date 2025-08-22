# echelon
A lightweight C++ linear algebra library
---
Nothing crazy like **eigen**, however maybe I'll revisit this sometime in the future and throw all the metaprogramming in the world at it. 

TODO:
- [ ] Vector Addition
- [ ] Scalar Multiplication
- [ ] Dot Product (just define standard inner product for R2)
- [ ] Norm?
- [ ] Matrices!
- [ ] Refactor Matrix & Vector to be template metaprogrammed... add compile time checks/assert, etc. 






Compilation:
g++ -std=c++20 -Wall -Wextra -Wpedantic -O0 -g \
    -fsanitize=address,undefined -fno-omit-frame-pointer \
    -Iinclude main.cpp -o app

