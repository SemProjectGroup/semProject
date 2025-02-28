# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\semProjectAlpha_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\semProjectAlpha_autogen.dir\\ParseCache.txt"
  "semProjectAlpha_autogen"
  )
endif()
