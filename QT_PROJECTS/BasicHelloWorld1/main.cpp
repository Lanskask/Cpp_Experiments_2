#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[]) {
//    QCoreApplication a(argc, argv);
//    qWarning("Hello, Qt!");
    int x = 20;
    QString msg ("Some message");
    qWarning() << "Hello, Qt!";
    qWarning() << "First Str" << 1 << "Second§";
    qWarning(msg.toStdString().c_str());
    qWarning(qPrintable("qPrintabls str " + msg));

    QTextStream out_stream(stdout);
    out_stream.setFieldWidth(10);
    out_stream.setPadChar('*');
    out_stream << msg << " " << x << endl;


    //    return a.exec();
}
