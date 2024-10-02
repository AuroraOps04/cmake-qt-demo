set(CMAKE_MINIMUM_REQUIRED_VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

project(CmakeQtDemo)

find_package(Qt5 COMPONENTS  Widgets REQUIRED)

if(cMAKE_VERSION VERSION_LESS "3.7.0")
  set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()


add_executable(${PROJECT_NAME} main.cpp mainwindow.cpp )

target_link_libraries(${PROJECT_NAME}  Qt5::Widgets)
