# binarysearch.com Solutions

> C++ solutions to coding problems from the binarysearch.com practice platform.

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=cplusplus&logoColor=white) ![Problems](https://img.shields.io/badge/Problems-16-blue?style=flat-square)

## Overview

Despite the repository name, this is not (only) about the binary-search algorithm: it collects solutions to problems from **binarysearch.com**, an online coding-practice platform. Problems are grouped the way they were practised — general practice, and a set tagged as asked at **Uber**. Most files contain just the platform's `solve(...)` function.

## Practice

| Problem | Technique | Code |
|---|---|---|
| 5-Star Review Percentage | Math — closed-form count of extra 5-star reviews | [Solution](./Practice/5-Star%20Review%20Percentage.cpp) |
| Collatz Sequence | Simulation | [Solution](./Practice/Collatz%20Sequence.cpp) |
| Largest Elements in Their Row and Column | Row and column sums | [Solution](./Practice/Largest%20Elements%20in%20Their%20Row%20and%20Column.cpp) |
| Linked List Jumps | In-place linked-list traversal | [Solution](./Practice/Linked%20List%20Jumps.cpp) |
| Repeated K-Length Substrings | Sliding window + hash map | [Solution](./Practice/Repeated%20K-Length%20Substrings.cpp) |

## Uber-tagged problems

| Problem | Technique | Code |
|---|---|---|
| Add One to List | Digit-array addition with carry | [Solution](./Uber/Add%20One%20to%20List.cpp) |
| Anagram Checks | Character frequency counting | [Solution](./Uber/Anagram%20Checks.cpp) |
| Convert Base 2 to Base 6 | Big-number base conversion on digit arrays (draft) | [Solution](./Uber/convert%20base%202%20to%20base%206.cpp) |
| Fixed Point | Binary search | [Solution](./Uber/Fixed%20Point.cpp) |
| Maximize Binary String Score | Running counts of zeros/ones across split points | [Solution](./Uber/Maximize%20Binary%20String%20Score.cpp) |
| Merging Two Sorted Lists | Two-way merge | [Solution](./Uber/Merging%20Two%20Sorted%20Lists.cpp) |
| Pascal's Triangle | n-th row via the binomial-coefficient recurrence | [Solution](./Uber/Pascal%27s%20Triangle.cpp) |
| Rotate List Left by K | Reversal algorithm | [Solution](./Uber/Rotate%20List%20Left%20by%20K.cpp) |
| Shift to Create Range | Circular consecutive-difference check | [Solution](./Uber/Shift%20to%20Create%20Range.cpp) |
| Wolf of Wall Street | Single pass with running minimum (one transaction) | [Solution](./Uber/Wolf%20of%20Wall%20Street.cpp) |
| Wolves of Wall Street | Greedy — sum of rising runs (multiple transactions) | [Solution](./Uber/Wolves%20of%20Wall%20Street.cpp) |

## Compile & run

`Uber/Add One to List.cpp` and `Uber/Wolves of Wall Street.cpp` include a `main()` that reads from stdin:

```bash
g++ -std=c++17 -O2 "Uber/Wolves of Wall Street.cpp" -o wolves
./wolves < input.txt
```

The other files hold only the `solve(...)` function. To try one locally, include it from a driver:

```cpp
#include <bits/stdc++.h>
using namespace std;
#include "Uber/Fixed Point.cpp"

int main() {
    vector<int> nums{-5, -2, 0, 3, 4};
    cout << solve(nums) << '\n';   // 3
}
```

```bash
g++ -std=c++17 -O2 main.cpp -o main && ./main
```

> `convert base 2 to base 6.cpp` is an unfinished draft and does not compile as-is.

---

Made by [Mukul Kumar](https://mkk96.github.io) · [GitHub](https://github.com/mkk96) · [LinkedIn](https://www.linkedin.com/in/mukul-kumar-60322616b/)
