# The road to `import boost`: a library developer's journey into C++20 modules

This repository contains the sample code and slides for my talk at using std::cpp 2026.

## Abstract

C++20 modules have been in the standard for more than 5 years now. They promise a fundamental change to how we write C++, but adoption hasn't been as widespread as many expected. This talk takes a deep dive into the practical aspects of C++20 modules, exploring the reality of the ecosystem as it stands today.

The session begins by covering how to write module-native applications, introducing all the required core concepts. It then examines potential build time improvements in the context of a real-world application that uses Boost - spoiler: having `import boost` would save the day! Finally, it explores the options available to library authors for adding C++20 module support, including a prototype currently being developed at Boost.

No prior experience with C++20 modules is required to follow along.

## Useful links

Full video: https://www.youtube.com/watch?v=hD9JHkt7e2Y
Slides: https://github.com/anarthal/usingstdcpp-2026/blob/master/slides.pdf
C++20 modules in Boost design document: https://github.com/anarthal/boost-cmake/blob/feature/cxx20-modules/modules.md
