add_executable(hello Hello.cpp)

set_target_properties(hello
  PROPERTIES
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
    CXX_STANARD_REQUIRED ON
    CXX_CLANG_TIDY "clang-tidy;-warnings-as-errors=*"
  )

target_link_libraries(hello ${CONAN_LIBS})
