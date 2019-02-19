macro(add_python_script PYFILE)
	file(MAKE_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})
	#message(STATUS "Will install \"${CMAKE_CURRENT_LIST_FILE}/${PYFILE}.py\" to \"${EXECUTABLE_OUTPUT_PATH}\"")
	add_custom_target("install_${PYFILE}" ALL
		COMMAND chmod +x "${CMAKE_CURRENT_LIST_DIR}/${PYFILE}.py"
		COMMAND ln -sf "${CMAKE_CURRENT_LIST_DIR}/${PYFILE}.py" ${EXECUTABLE_OUTPUT_PATH})
endmacro()

macro(add_python_module PYFILE)
	#message(STATUS "Will install \"${CMAKE_CURRENT_LIST_FILE}/${PYFILE}.py\" to \"${PYTHON_OUTPUT_PATH}\"")
	add_custom_target("${PYFILE}_install" ALL 
		COMMAND ln -sf "${CMAKE_CURRENT_LIST_DIR}/${PYFILE}.py" ${PYTHON_OUTPUT_PATH})
endmacro()
