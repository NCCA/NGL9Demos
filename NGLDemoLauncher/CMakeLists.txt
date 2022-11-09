cmake_minimum_required(VERSION 3.12)

project(NGLDemoLauncher VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR}/ui)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

# find Qt libs first we check for Version 6
find_package(Qt6 COMPONENTS OpenGL Widgets OpenGLWidgets QUIET )
if ( Qt6_FOUND )
    message("Found Qt6 Using that")
else()
    message("Found Qt5 Using that")
    find_package(Qt5 COMPONENTS OpenGL Widgets REQUIRED)
endif()

include_directories(include)

set(PROJECT_SOURCES
        main.cpp
        src/MainWindow.cpp
        include/MainWindow.h
        ui/MainWindow.ui
)

add_executable(NGLDemoLauncher ${PROJECT_SOURCES})

target_link_libraries(NGLDemoLauncher PRIVATE Qt::Widgets)

