#pragma once

#include "webapplication.h"

class QJsonObject;

class WebServer;

class SeriesApplication : public WebApplication
{
    Q_OBJECT

public:
    SeriesApplication(const QJsonObject &config, WebServer &webServer);

    void start() Q_DECL_OVERRIDE;

    void handleRequest(HttpClientConnection *connection, const HttpRequest &request) Q_DECL_OVERRIDE;

private:
    WebServer &m_webServer;
};
