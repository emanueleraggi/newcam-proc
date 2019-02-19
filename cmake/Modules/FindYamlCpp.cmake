INCLUDE(FindPackageHandleStandardArgs)

SET(YamlCpp_IncludeSearchPaths
  /usr/include
  /usr/local/include
  /opt/local/include
)

set(YamlCpp_LibrarySearchPaths
	/usr/lib
	/usr/local/lib
	/opt/local/lib
)

FIND_PATH(YamlCpp_INCLUDE_DIR yaml-cpp/yaml.h
	PATHS ${YamlCpp_IncludeSearchPaths})

FIND_LIBRARY(YamlCpp_LIBRARY
	NAMES yaml-cpp
	PATHS ${YamlCpp_LibrarySearchPaths})

FIND_PACKAGE_HANDLE_STANDARD_ARGS(YamlCpp "Could not find yaml-cpp library"
	YamlCpp_LIBRARY
	YamlCpp_INCLUDE_DIR
)

MARK_AS_ADVANCED(
	YamlCpp_INCLUDE_DIR
	YamlCpp_LIBRARY)

