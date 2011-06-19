include_directories("${PROJECT_SOURCE_DIR}/include")
link_directories("${PROJECT_SOURCE_DIR}/lib")
add_executable(rdbs rdbs.cpp)
target_link_libraries(rdbs rdbc)

