# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SemProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SemProject_autogen.dir\\ParseCache.txt"
  "SemProject_autogen"
  )
endif()
