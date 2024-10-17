#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml"))); // Load QML as a resource

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
