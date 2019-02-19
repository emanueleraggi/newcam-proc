#
# function to write bash scripts that properly set the python path
# and pass arguments to the python executable
#
# Will Snyder

function(write_python_path_script py_file script_name path)

# find python executable
execute_process(COMMAND 
  ${PYTHON_EXECUTABLE} -c "import sys; sys.stdout.write(sys.version[:3])"
  OUTPUT_VARIABLE pyversion)

# get absolute path
get_filename_component(py_file_abs ${py_file} ABSOLUTE)
# get name
#get_filename_component(file_name ${file} NAME_WE)

#message("Writing bash script for ${py_file}")
# create a bash script to run the file

file(WRITE ${EXECUTABLE_OUTPUT_PATH}/${script_name} 
"#!/bin/sh
export LD_LIBRARY_PATH=/usr/local/lib 
export PYTHONPATH=${path}
exec ${PYTHON_EXECUTABLE} ${py_file_abs} $*")

add_custom_target(${script_name} ALL
#			COMMAND echo "\\#!/bin/sh" > ${script_name}
#			COMMAND echo "export 'PYTHONPATH=${path}'" >> ${script_name}
#			COMMAND echo "exec ${PYTHON_EXECUTABLE} ${py_file_abs} \$$ *" >> ${script_name}
#			#COMMENT "Should have just written $*."
			WORKING_DIRECTORY ${EXECUTABLE_OUTPUT_PATH}
			COMMENT "Setting permissions for ${py_file}"
			)

add_custom_command(
			TARGET ${script_name}
			POST_BUILD
			COMMAND chmod 775 ${script_name}
			WORKING_DIRECTORY ${EXECUTABLE_OUTPUT_PATH}
			)

set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES ${EXECUTABLE_OUTPUT_PATH}/${script_name})

#COMMAND echo "!/bin/sh\nexport PYTHONPATH=${path}\nexec ${PYTHON_EXECUTABLE} ${py_file_abs} $*\n" >> ${script_name}

# fix the file permissions
#execute_process(COMMAND
# 		chmod 775 ${EXECUTABLE_OUTPUT_PATH}/${script_name})




endfunction()




