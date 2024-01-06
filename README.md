# Learning-Bazel
A repo documenting my learning and experimenting with the Bazel build system for C++

## General Notes

- Need to run bazel commands from root of workspace - same level as `WORKSPACE` file (which you must create yourself at root of workspace)

- A folder containing a BUILD file is called a package

- Each package target is defined by a lable of format: 
```
@repo-name//package-name:target-name
```
  For eg. `@Learning-Bazel//tut1/examples/example1:first_eg`

- Important Bazel constructs:
  - **cc_binary** - for creating the main executable
    ```
    # Example:
    cc_binary(
      name = "main", # doesn't necessarily need to be called 'main'
      srcs = ["main.cc"],
      deps = ["//src/lib:CPPLib"],
    )
    ```
  - **cc_library** - for creating importable modules/libraries in your codebase
    ```
    # Example:
    cc_library(
        name = "CPPLib",
        srcs = ["cpplib.cc"],
        hdrs = ["cpplib.h"],
        visibility = ["//visibility:public"],
    )
    ```
  - **cc_test** - for creating a test suite executable
    ```
    # Example:
    cc_test(
        name = "cpplib_test",
        srcs = ["cpplib_test.cc"],
        deps = [
            "//src/lib:CPPLib",
            "@com_google_googletest//:gtest_main",
        ],
    )
    ```
  - **git_repository** - allows you to pull/import third-party libraries from external sources into your project; usually goes in `WORKSPACE` file at root of your project
    ```
    # Example:
    git_repository(
        name = "com_google_absl",
        remote = "https://github.com/abseil/abseil-cpp.git",
        tag = "20211102.0",
    )
    ```
- To enable debugging on bazel run/build, need to add `-c dbg` at the end of command. Eg: `bazel run src/main:main -c dbg`
## Running a build

- For example1:
```
bazel run examples/example1:first_eg
```
