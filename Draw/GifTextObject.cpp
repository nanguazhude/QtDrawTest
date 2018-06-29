#include "GifTextObject.hpp"
#include <QtWidgets/qwidget.h>
#include <QtWidgets/qtextedit.h>
#include <QtGui/qpainter.h>
#include <QtCore/qdebug.h>

QSizeF GifTextObject::intrinsicSize(
	QTextDocument *doc, 
	int posInDocument,
	const QTextFormat &format) {

	_mp_movie = format.property(QTextCharFormat::UserProperty+1).value<QWidget *>();

	_mp_PosInDocument = posInDocument;
	_mp_Document = doc;

	static int gsc = 0;
	//qDebug() << ++gsc<<"getsize:" << posInDocument;

	if ( _mp_movie ) {
		return _mp_movie->size();
	}
	else {
		return {12,12};
	}

}

void GifTextObject::drawObject(
	QPainter *painter, 
	const QRectF &rect, 
	QTextDocument *doc,
	int posInDocument, 
	const QTextFormat &format) {

	auto viewport = dynamic_cast<QWidget *>(painter->device());
	if (viewport == nullptr) { 
		return; 
	}
	//if(_mp_movie)qDebug() << ( viewport == _mp_movie->parent() );

	static int gsc = 0;
	//qDebug() << ++gsc << "draw:" << posInDocument;
	painter->fillRect(rect,QColor(25,255,255,125));

	//qDebug() << rect;
	QTextCursor varTextCursor{ doc };
	varTextCursor.setPosition( posInDocument );
	
	_mp_movie = format.property(QTextCharFormat::UserProperty + 1).value<QWidget *>();
	auto text_edit = dynamic_cast<QTextEdit *>( format.property(QTextCharFormat::UserProperty + 2).value<QWidget *>() );
	if (_mp_movie && text_edit) {
		QRect varCRect =  text_edit->cursorRect( varTextCursor );
		const auto varPos = varCRect.topRight();
		_mp_movie->setGeometry ( varPos.x() , varPos.y() , _mp_movie->width() , _mp_movie->height() );
	}

	(void)doc;
	(void)posInDocument;
	(void)format;

}




