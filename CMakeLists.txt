cmake_minimum_required(VERSION 2.8.3)

project(rrct_typekit)

# Defines the orocos_* cmake macros. See that file for additional
# documentation.
find_package(OROCOS-RTT REQUIRED)
include(${OROCOS-RTT_USE_FILE_PATH}/UseOROCOS-RTT.cmake)

include_directories("/usr/include/eigen3")

# Define the way rotation properties get written to XML
# Set one of the two options below to write them as EULER ZYX or RPY
# Set none of them to write them as matrices
#add_definitions(-DROTATION_PROPERTIES_RPY)

orocos_typekit(${PROJECT_NAME}
  src/rrctTypekit.cpp
  src/rrctTypekitJointAngles.cpp
  src/rrct/kinematics/JointAngles.hpp
  src/rrct/kinematics/JointAngles.cpp
  
  src/rrct/kinematics/JointVelocities.hpp
  src/rrct/kinematics/JointVelocities.cpp
  
  src/rrct/kinematics/JointAccelerations.hpp
  src/rrct/kinematics/JointAccelerations.cpp
  
  src/rrct/dynamics/JointTorques.hpp
  src/rrct/dynamics/JointTorques.cpp
 
  src/rrct/dynamics/JointImpedance.hpp
  src/rrct/dynamics/JointImpedance.cpp
      
  src/rrctProperties.cpp
  src/rrctProperties.hpp
  )

target_link_libraries(${PROJECT_NAME}) # ${orocos_kdl_LIBRARIES})

#add_subdirectory(src/corba)

install(
  FILES src/rrctTypekitTypes.hpp
  DESTINATION include/orocos/rrct_typekit/typekit
  RENAME Types.hpp
)
#install(
#  FILES ${LUA_FILES}
#  DESTINATION ${LUA_DESTINATION}/lua/5.1/${PROJECT_NAME}/
#)

orocos_component(Dummy src/dummy-processing.cpp src/dummy-processing.hpp src/rrct/kinematics/JointAngles.hpp src/rrct/kinematics/JointAngles.cpp)
target_link_libraries(Dummy)


orocos_generate_package(
)
