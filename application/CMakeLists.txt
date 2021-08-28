file(GLOB DATABASE_GW database_gw/*.cpp)
file(GLOB INTERFACE interface/*.cpp)
file(GLOB KERNEL kernel/*.cpp)

set(SRC main.cpp ${DATABASE_GW} ${INTERFACE} ${KERNEL})

include_directories(include/)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)