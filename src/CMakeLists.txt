# Shared object

orocos_typekit(${LIBRARY_NAME}
               TypekitPlugin.cpp

               Translation.cpp

               JointAngles.cpp
               JointVelocities.cpp
               JointAccelerations.cpp

               JointTorques.cpp
               JointImpedance.cpp

               JointState.cpp)

target_link_libraries(${LIBRARY_NAME} ${RST-RT_LIBRARIES})

# Install

install(FILES       Types.hpp

                    Translation.hpp

                    JointAngles.hpp
                    JointVelocities.hpp
                    JointAccelerations.hpp

                    JointTorques.hpp
                    JointImpedance.hpp

                    JointState.hpp
        DESTINATION include/orocos/rst-rt_typekit/typekit)
