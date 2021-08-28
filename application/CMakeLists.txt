file(GLOB DATABASE_GW ${CMAKE_CURRENT_SOURCE_DIR}/src/database_gw/*.cpp)
file(GLOB INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src/interface/*.cpp)
file(GLOB KERNEL ${CMAKE_CURRENT_SOURCE_DIR}/src/kernel/*.cpp)

set(SRC ${DATABASE_GW} ${INTERFACE} ${KERNEL} main.cpp )

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)