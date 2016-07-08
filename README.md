# iron-utility
**iron-utility** is a collection of (potentially) useful type-oriented utilities for C++ as a header-only library, most applicable to SFINAE/enable_if template metaprogramming.

## Installation
Download [`utility.h`](https://github.com/boatilus/iron-utility/blob/master/utility.h) to your project's source tree, include with `#include "path/to/utility.h` and go!

### Compiler support
Requires a roughly-compliant C++14 compiler and STL, as `std::enable_if_t` support is required (but this can be easily worked around). Visual Studio 2015's MSVC++ compiler works fine and passes all tests. The version of Clang included with Xcode 7.3 is known to work (with the `-std=c++14` flag specified).

## Docs
Full documentation is available at <https://boatilus.gitbooks.io/iron-utility>, generated directly from files within this repository's [`docs` directory](https://github.com/boatilus/iron-utility/blob/master/docs/).

## Contributing
Contributions are welcome! For major changes, please file an issue with the !feature tag before submitting a pull request.

## License
**iron-utility** (the header `utility.h`, all test files and documentation) is dedicated to the public domain via Creative Commons' [CC0 public domain dedication tool](https://creativecommons.org/choose/zero/). In jurisdictions where public domain is not recognized, the CC0 dedication provides a liberal MIT-like use license. The full dedication text is avaiable [here](https://github.com/boatilus/iron-utility/blob/master/LICENSE.md).

[**Catch**](https://github.com/philsquared/Catch), used for testing **iron-utility**, is licensed under the Boost Software License. The full license text is available [here](https://github.com/boatilus/iron-utility/blob/master/LICENSE_1_0.txt).