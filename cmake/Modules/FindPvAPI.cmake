INCLUDE(FindPackageHandleStandardArgs)

SET(PvAPI_IncludeSearchPaths
  /usr/include/
  /usr/local/include/
  /opt/local/include
)

SET(PvAPI_LibrarySearchPaths
  /usr/lib/
  /usr/local/lib/
  /opt/local/lib/
)

FIND_PATH(PvAPI_INCLUDE_DIR PvApi.h
	PATHS ${PvAPI_IncludeSearchPaths}
)
FIND_LIBRARY(PvAPI_LIBRARY
	NAMES PvAPI
  	PATHS ${PvAPI_LibrarySearchPaths}
)

# Handle the REQUIRED argument and set the <UPPERCASED_NAME>_FOUND variable
FIND_PACKAGE_HANDLE_STANDARD_ARGS(PvAPI "Could NOT find PvAPI library (Prosilica / Allied Vision Tech cameras)"
	PvAPI_LIBRARY
	PvAPI_INCLUDE_DIR
)

set(archname ${CMAKE_SYSTEM_PROCESSOR})
string(TOLOWER "${archname}" lower_arch)
if (${lower_arch} MATCHES "^arm") 
	set(PvAPI_DEFINITIONS -D_LINUX -D_arm)
elseif (${lower_arch} MATCHES "^x86_64") 
	set(PvAPI_DEFINITIONS -D_LINUX -D_x64)
else()
	message(FATAL_ERROR "Unknown architecture ${CMAKE_SYSTEM_PROCESSOR}")
endif()

MARK_AS_ADVANCED(
  PvAPI_INCLUDE_DIR
  PvAPI_LIBRARY
  PvAPI_DEFINITIONS
)
