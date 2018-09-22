#include "seriesapplication.h"

#include "httprequest.h"
#include "httpresponse.h"
#include "httpclientconnection.h"

SeriesApplication::SeriesApplication(const QJsonObject &config, QObject *parent) :
    WebApplication(parent)
{

}

void SeriesApplication::start()
{

}

void SeriesApplication::handleRequest(HttpClientConnection *connection, const HttpRequest &request)
{
    HttpResponse response;
    response.protocol = request.protocol;
    response.statusCode = HttpResponse::StatusCode::OK;
    connection->sendResponse(response, "Hello from SeriesApplication: " + request.path);
}
