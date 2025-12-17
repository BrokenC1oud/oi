cmake_minimum_required(VERSION 3.10)
project(MultiExecutables)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LUOGU "${CMAKE_CURRENT_SOURCE_DIR}/luogu/*.cpp")

foreach(cpp_file ${LUOGU})
  get_filename_component(exec_name ${cpp_file} NAME_WE)
  add_executable(${exec_name} ${cpp_file})
  add_compile_options(-fsanitize=address,undefined,leak)
  add_link_options(-fsanitize=address,undefined,leak)
endforeach()

file(GLOB PRACTICE "${CMAKE_CURRENT_SOURCE_DIR}/practice/*.cpp")

foreach (cpp_file ${PRACTICE})
  get_filename_component(exec_name ${cpp_file} NAME_WE)
  add_executable(${exec_name} ${cpp_file})
endforeach ()

file(GLOB PRACTICE_c "${CMAKE_CURRENT_SOURCE_DIR}/practice/*.c")

foreach (cpp_file ${PRACTICE_c})
  get_filename_component(exec_name ${cpp_file} NAME_WE)
  add_executable(${exec_name} ${cpp_file})
endforeach ()

file(GLOB CODEFORCES "${CMAKE_CURRENT_SOURCE_DIR}/codeforces/*.cpp")

foreach (cpp_file ${CODEFORCES})
  get_filename_component(exec_name ${cpp_file} NAME_WE)
  add_executable(${exec_name} ${cpp_file})
endforeach ()

file(GLOB LEETCODE "${CMAKE_CURRENT_SOURCE_DIR}/leetcode/*.cpp")

foreach (cpp_file ${LEETCODE})
  get_filename_component(exec_name ${cpp_file} NAME_WE)
  add_executable(${exec_name} ${cpp_file})
endforeach ()

file(GLOB UNIVERSITY "${CMAKE_CURRENT_SOURCE_DIR}/university/*.c")

foreach (cpp_file ${UNIVERSITY})
  get_filename_component(exec_name ${cpp_file} NAME_WE)
  add_executable(${exec_name} ${cpp_file})
endforeach ()

file(GLOB PINTIA "${CMAKE_CURRENT_SOURCE_DIR}/pintia/**/*.cpp")

foreach (cpp_file ${PINTIA})
  get_filename_component(exec_name ${cpp_file} NAME_WE)
  add_executable(${exec_name} ${cpp_file})
endforeach ()

# Optional: Print message showing what executables were created
message(STATUS "Created executables for: ${LUOGU}")

