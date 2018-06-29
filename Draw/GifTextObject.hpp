#ifndef _GIF_CPP_HPP_TEXT_OBJECT
#define _GIF_CPP_HPP_TEXT_OBJECT

#include <QTextObjectInterface>
class QTextDocument;
class QTextFormat;
class QPainter;
class QRectF;
class QSizeF;
class QWidget;

enum { GifTextFormat = QTextFormat::UserObject + 22 };

class GifTextObject : public QObject ,public QTextObjectInterface {
	Q_OBJECT
	Q_INTERFACES(QTextObjectInterface)
private:
	QWidget * _mp_movie = nullptr;
	int _mp_PosInDocument = -1;
	QTextDocument * _mp_Document = nullptr;
public:
	QSizeF intrinsicSize(QTextDocument *doc, int posInDocument,
		const QTextFormat &format) override;
	void drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc,
		int posInDocument, const QTextFormat &format) override;
};



#endif
