load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "lib1",
    srcs = ["lib1.cc"],
    hdrs = ["lib1.h"],
    visibility = ["//examples/example3:__pkg__"], # only usable to package example3
                                                # theres docs on other visibility config options
)