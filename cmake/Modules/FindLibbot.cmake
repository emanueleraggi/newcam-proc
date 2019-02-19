INCLUDE(FindPackageHandleStandardArgs)
#INCLUDE(HandleLibraryTypes)

SET(Libbot_IncludeSearchPaths
  /usr/include/
  /usr/local/include/
  /opt/local/include
)

SET(Libbot_LibrarySearchPaths
  /usr/lib/
  /usr/local/lib/
  /opt/local/lib/
)

FIND_PATH(Libbot_INCLUDE_DIR lcmtypes/bot2_procman.h
	PATHS ${Libbot_IncludeSearchPaths})

set(Libbot_LIBRARIES "")

# Find the core libbot library
FIND_LIBRARY(Libbot_LIB_CORE
  NAMES bot2-core
  PATHS ${Libbot_LibrarySearchPaths}
)
if (Libbot_LIB_CORE)
  set(Libbot_LIBRARIES ${Libbot_LIBRARIES} ${Libbot_LIB_CORE})
endif()
message(STATUS "Found Libbot core library at ${Libbot_LIB_CORE}")

# Find the core types library
FIND_LIBRARY(Libbot_TYPESLIB_CORE
  NAMES lcmtypes_bot2-core
  PATHS ${Libbot_LibrarySearchPaths}
)
if (Libbot_TYPESLIB_CORE)
  set(Libbot_LIBRARIES ${Libbot_LIBRARIES} ${Libbot_TYPESLIB_CORE})
endif()

# Find the procman types library
FIND_LIBRARY(Libbot_TYPESLIB_PROCMAN
  NAMES lcmtypes_bot2-procman
  PATHS ${Libbot_LibrarySearchPaths}
)
if (Libbot_TYPESLIB_PROCMAN)
  set(Libbot_LIBRARIES ${Libbot_LIBRARIES} ${Libbot_TYPESLIB_PROCMAN})
endif()

# Handle the REQUIRED argument and set the <UPPERCASED_NAME>_FOUND variable
FIND_PACKAGE_HANDLE_STANDARD_ARGS(Libbot "Could NOT find Libbot library(Extra LCM Goodies)"
	Libbot_LIBRARIES
	Libbot_INCLUDE_DIR
)

# Collect optimized and debug libraries
#HANDLE_LIBRARY_TYPES(LCM)

MARK_AS_ADVANCED(
	Libbot_INCLUDE_DIR
	Libbot_LIBRARIES
)
