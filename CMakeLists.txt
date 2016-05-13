cmake_minimum_required(VERSION 2.8.3)

project(rrct_typekit)

# Defines the orocos_* cmake macros. See that file for additional
# documentation.
find_package(OROCOS-RTT REQUIRED)
include(${OROCOS-RTT_USE_FILE_PATH}/UseOROCOS-RTT.cmake)

#find_package(orocos_kdl REQUIRED)
#include_directories(${orocos_kdl_INCLUDE_DIRS})
#link_directories(${orocos_kdl_LIBRARY_DIRS})

include_directories("/usr/include/eigen3")

# Define the way rotation properties get written to XML
# Set one of the two options below to write them as EULER ZYX or RPY
# Set none of them to write them as matrices
#add_definitions(-DROTATION_PROPERTIES_RPY)

orocos_typekit(${PROJECT_NAME}
  src/rrctTypekit.cpp
  src/rrctTypekitJointAngles.cpp
  src/rrct/JointAngles.hpp
  src/rrct/JointAngles.cpp
  src/rrctProperties.cpp
  src/rrctProperties.hpp
  )

target_link_libraries(${PROJECT_NAME}) # ${orocos_kdl_LIBRARIES})

#add_subdirectory(src/corba)

#file(GLOB LUA_FILES "lua/*.lua")
#set(LUA_DESTINATION share)
#if(catkin_FOUND)
#  catkin_add_env_hooks(10.${PROJECT_NAME} SHELLS sh DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/env-hooks)
#  set(LUA_DESTINATION ${CATKIN_GLOBAL_SHARE_DESTINATION})
#endif()

install(
  FILES src/rrctTypekitTypes.hpp
  DESTINATION include/orocos/rrct_typekit/typekit
  RENAME Types.hpp
)
#install(
#  FILES ${LUA_FILES}
#  DESTINATION ${LUA_DESTINATION}/lua/5.1/${PROJECT_NAME}/
#)

orocos_component(Dummy src/dummy-processing.cpp src/dummy-processing.hpp src/rrct/JointAngles.hpp src/rrct/JointAngles.cpp)
target_link_libraries(Dummy)


orocos_generate_package(
  #DEPENDS orocos-kdl
)
