from distutils.core import setup
from distutils.extension import Extension

include_dirs = ["/usr/include/boost", "/usr/local/include", "include"]
libraries = ["boost_python-py34"]
library_dirs = ["/usr/lib"]

system_files = [
    "source/system.cc",
    "source/system_wrapper.cc",
]

setup(
    name="notsergius",
    ext_modules=[
        Extension("notsergius.system",
                  system_files,
                  library_dirs=library_dirs,
                  libraries=libraries,
                  include_dirs=include_dirs,
                  extra_compile_args=["-std=c++11"],
                  depends=[],
                  ),
    ],
)
