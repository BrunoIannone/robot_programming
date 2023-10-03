# add_library(core_library SHARED
# utils/property_eigen.cpp
# utils/blob.cpp
# utils/id_context.cpp
# utils/serializer.cpp
# utils/property.cpp
# utils/property_identifiable.cpp
# utils/deserializer.cpp
# utils/property_container.cpp
# utils/property_container_manager.cpp
# utils/serializable.cpp
# utils/serialization_context.cpp
# utils/id_placeholder.cpp
# utils/identifiable.cpp
# utils/object_data.cpp
# messages/pose_message.cpp
# messages/base_sensor_message.cpp
# messages/odometry_message.cpp

# # TODO add other .cpp files
# )

add_subdirectory(messages)
add_subdirectory(utils)