# Shared object

orocos_typekit(${LIBRARY_NAME}
               TypekitPlugin.cpp

               Translation.cpp

               JointAngles.cpp
               JointVelocities.cpp
               JointAccelerations.cpp
               JointJerks.cpp

               JointTorques.cpp
               JointImpedance.cpp
               Forces.cpp
               Torques.cpp
               Wrench.cpp

               JointState.cpp
               Weights.cpp
)

target_link_libraries(${LIBRARY_NAME} ${RST-RT_LIBRARIES})

# Install

install(FILES       Types.hpp

                    Translation.hpp

                    JointAngles.hpp
                    JointVelocities.hpp
                    JointAccelerations.hpp
                    JointJerks.hpp

                    JointTorques.hpp
                    JointImpedance.hpp
                    Forces.hpp
                    Torques.hpp
                    Wrench.hpp

                    JointState.hpp
                    Weights.hpp
        DESTINATION include/orocos/rst-rt_typekit/typekit)
