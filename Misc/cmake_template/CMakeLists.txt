cmake_minimum_required (VERSION 3.25.1)
project(project_name)

add_subdirectory(src)
#[[Aggiungi tutte le altre necessarie]]

add_executable(executable_name
main.cpp #[[Aggiungi tutti i cpp necessari]]
)
target_link_libraries(executable_name test_lib_1 #[[Aggiungi tutte le librerie necessarie]])

