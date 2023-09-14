#include <nanobind/nanobind.h>

namespace nb = nanobind;

using namespace nb::literals;

NB_MODULE(_my_ext_impl, m) {
    m.def("add", [](int a, int b) { return a + b; }, "a"_a, "b"_a);
}