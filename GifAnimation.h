#pragma once
#include <QObject>
class QLabel;
class QMovie;
class GifAnimation : public QObject
{
public:
	GifAnimation(QObject *parent = nullptr);
	void startMovie();
	void setFilename(const QString &filename)
	{
		mFilename = filename;
	}

	QString getFilename() const
	{
		return mFilename;
	}
	QLabel* getWidget() const
	{
		return mLabel;
	}
private: 
	QLabel *mLabel;
	QMovie *mMovie;
	QString mFilename;

};


