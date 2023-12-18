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
## Running a build

- For example1:
```
bazel run examples/example1:first_eg
```
