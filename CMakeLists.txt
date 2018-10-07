set(HEADERS
    seriesapplication.h
    seriesplugin.h
)

set(SOURCES
    seriesapplication.cpp
    seriesplugin.cpp
)

add_library(seriesplugin SHARED ${HEADERS} ${SOURCES})

target_link_libraries(seriesplugin Qt5::Core Qt5::Network webserverlib)
