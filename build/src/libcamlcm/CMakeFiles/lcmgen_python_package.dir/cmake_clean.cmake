file(REMOVE_RECURSE
  "lcmtypes/c"
  "lcmtypes/cpp"
  "lcmtypes/java"
  "lcmtypes/python"
  "CMakeFiles/lcmgen_python_package"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/lcmgen_python_package.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
