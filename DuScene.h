#pragma once

#include <QGraphicsScene>
class GifAnimation;
class DuScene : public QGraphicsScene

{
public:
	DuScene(QObject *parent = nullptr);

private:
	GifAnimation *mGifAnimation;
};

