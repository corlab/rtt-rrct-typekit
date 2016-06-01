# Shared object

orocos_typekit(${LIBRARY_NAME}
               TypekitPlugin.cpp
               JointAngles.cpp
               JointVelocities.cpp
               JointAccelerations.cpp
               JointTorques.cpp
               JointImpedance.cpp)

target_link_libraries(${LIBRARY_NAME} ${RST-RT_LIBRARIES})

# Install

install(FILES       Types.hpp
                    JointAngles.hpp
                    JointVelocities.hpp
                    JointAccelerations.hpp
                    JointTorques.hpp
                    JointImpedance.hpp
        DESTINATION include/orocos/rst-rt_typekit/typekit)
