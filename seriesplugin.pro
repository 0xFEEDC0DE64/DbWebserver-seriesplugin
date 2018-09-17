QT += core network

DBLIBS += webserverlib

HEADERS += seriesplugin.h \
    seriesapplication.h

SOURCES += seriesplugin.cpp \
    seriesapplication.cpp

FORMS +=

RESOURCES +=

TRANSLATIONS +=

OTHER_FILES += seriesplugin.json

include(../plugin.pri)
