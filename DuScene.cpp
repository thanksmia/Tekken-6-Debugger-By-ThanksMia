#include "DuScene.h"
#include "GifAnimation.h"
#include <QLabel>

DuScene::DuScene(QObject *parent)
	: QGraphicsScene(parent)
{
	mGifAnimation = new GifAnimation(this);
	mGifAnimation->setFilename("./resources/harrypotter.gif");
	mGifAnimation->startMovie();
	addWidget(mGifAnimation->getWidget());

}