# CMakeList.txt: projekt CMake dla elementu rapacz_project, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (rapacz_project "main.cpp" "calculator.h" "calculator.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET rapacz_project PROPERTY CXX_STANDARD 20)
endif()

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
