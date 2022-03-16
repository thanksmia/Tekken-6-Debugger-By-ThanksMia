#include "Tekken6DebuggerByThanksMia.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <Qt>
#include <QDebug>
#include <QTextStream>
#include <QString>
#include <QVideoWidget>
#include <QMediaPlayer>










int main(int argc, char* argv[])
{

	QApplication app(argc, argv);

	



	Tekken6DebuggerByThanksMia w;
	//create the application and the main window





	//open qss file
	QFile file(":/templates/Combinear.qss");
	file.open(QFile::ReadOnly);

	QString styleSheet{ QLatin1String(file.readAll()) };

	//setup stylesheet
	app.setStyleSheet(styleSheet);

	w.show();
	return app.exec();
}
