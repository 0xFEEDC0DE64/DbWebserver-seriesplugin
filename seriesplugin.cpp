#include "seriesplugin.h"

#include "seriesapplication.h"

SeriesPlugin::SeriesPlugin(QObject *parent) :
    WebPlugin(parent)
{

}

QString SeriesPlugin::pluginName() const
{
    return QStringLiteral("series");
}

WebApplication *SeriesPlugin::createApplication(const QJsonObject &config, WebServer &webServer) const
{
    return new SeriesApplication(config, webServer);
}
