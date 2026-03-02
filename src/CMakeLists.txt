add_subdirectory(lib)
add_executable(calculator main.c)
target_link_libraries(calculator lib)

# Automatisation du test pour la fonction carré
enable_testing()
add_test(NAME TestCarre COMMAND calculator car 5)
set_tests_properties(TestCarre PROPERTIES PASS_REGULAR_EXPRESSION "25")
