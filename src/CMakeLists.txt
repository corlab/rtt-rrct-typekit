# Shared object

orocos_typekit(${LIBRARY_NAME}
               TypekitPlugin.cpp
               JointAngles.cpp)

target_link_libraries(${LIBRARY_NAME} ${RST-RT_LIBRARIES})

# Install

install(FILES       Types.hpp
        DESTINATION include/orocos/rst-rt_typekit/typekit)
