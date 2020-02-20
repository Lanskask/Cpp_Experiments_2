#include <QCoreApplication>
#include <QObject>
#include <QTextStream>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QTextStream out_stream(stdout);
    QTranslator translator;
    bool result = translator.load("trans_fr");
    if(!result) {
        out_stream << "ERROR: Failed to load translation file" << endl;
    } else {
        a.installTranslator(&translator);
    }

    QString first_str = QObject::tr("It's a first string");
    QString msg1 = QObject::tr("Hello my friend");
    QString msg2 = QObject::tr("Goodbuy");

    out_stream << first_str << endl;
    out_stream << msg1 << "\n" << msg2 << endl;

    return a.exec();
}
