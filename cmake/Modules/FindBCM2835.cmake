INCLUDE(FindPackageHandleStandardArgs)

SET(BCM2835_IncludeSearchPaths
  /usr/include
  /usr/local/include
  /opt/local/include
)

set(BCM2835_LibrarySearchPaths
	/usr/lib
	/usr/local/lib
	/opt/local/lib
)

FIND_PATH(BCM2835_INCLUDE_DIR bcm2835.h
	PATHS ${BCM2835_IncludeSearchPaths})

FIND_LIBRARY(BCM2835_LIBRARY
	NAMES bcm2835
	PATHS ${BCM2835_LibrarySearchPaths})

FIND_PACKAGE_HANDLE_STANDARD_ARGS(BCM2835 "Could not find BCM2835 RaspberryPi GPIO library"
	BCM2835_LIBRARY
	BCM2835_INCLUDE_DIR
)

MARK_AS_ADVANCED(
	BCM2835_INCLUDE_DIR
	BCM2835_LIBRARY)

