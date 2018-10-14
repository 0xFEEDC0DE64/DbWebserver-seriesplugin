set(HEADERS
    seriesapplication.h
    seriesplugin.h
)

set(SOURCES
    seriesapplication.cpp
    seriesplugin.cpp
)

set(OTHER_FILES
    seriesplugin.json
)

add_library(webserver-plugins-seriesplugin SHARED ${HEADERS} ${SOURCES} ${OTHER_FILES})

set_target_properties(webserver-plugins-seriesplugin PROPERTIES OUTPUT_NAME seriesplugin PREFIX "")

target_link_libraries(webserver-plugins-seriesplugin Qt5::Core Qt5::Network webserverlib)

add_dependencies(webserver-plugins webserver-plugins-seriesplugin)
