
MESSAGE("Identifying the OS...")
if(WIN32)
  MESSAGE("This is Windows.")
elseif(APPLE)
  MESSAGE("This is MacOS.")
  INCLUDE_DIRECTORIES("/usr/local/Cellar/cppunit/1.14.0/include/")
elseif(UNIX)
  MESSAGE("This is Linux.")
endif()

AUX_SOURCE_DIRECTORY("${PROJECT_SOURCE_DIR}/test" DIR_TESTS)
set(SRC "${PROJECT_SOURCE_DIR}/src" )

INCLUDE_DIRECTORIES("${PROJECT_SOURCE_DIR}/include")

SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin/test")

add_executable(utils_test
  ${SRC}/utils.cpp
  ${DIR_TESTS}
)

target_link_libraries(
  utils_test
  cppunit
  ${CMAKE_DL_LIBS}
)

ADD_TEST(NAME utils_test COMMAND "${PROJECT_SOURCE_DIR}/bin/test/utils_test")

set_tests_properties (utils_test
PROPERTIES FAIL_REGULAR_EXPRESSION "failed") 