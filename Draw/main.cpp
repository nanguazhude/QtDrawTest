﻿#include "MainWindow.hpp"
#include <QApplication>

#include <QtWidgets/QtWidgets>
#include <QtGui/QtGui>
#include <QtCore/QtCore>

class Test : public QWidget {
public:

	virtual void paintEvent(QPaintEvent *event) override {

		QPainter varPainter{ this };

		varPainter.setRenderHints(
			QPainter::Antialiasing |
			QPainter::TextAntialiasing |
			QPainter::SmoothPixmapTransform |
			QPainter::HighQualityAntialiasing
		);

		QStyle * varStyle = qApp->style();
		QStyleOptionButton varDrawData;
		varDrawData.initFrom(this);
		varDrawData.rect = QRect{ 10,10,100,30 };
		varDrawData.text = QStringLiteral("ABC");
		varDrawData.state |= QStyle::State_MouseOver;
		varStyle->drawControl(QStyle::CE_PushButton, &varDrawData, &varPainter, this);

		(void)event;
		//https://blog.csdn.net/liang19890820/article/details/50974059
		//QPainterPathStroker

	}

};

#include "ListView.hpp"

#include<QtGui/private/qtextdocumentlayout_p.h>

#include "sstd_qtextdocumentlayout_p.h"
#include "GifTextObject.hpp"

class WTest : public QLabel {
protected:
	void paintEvent( QPaintEvent * arg ) override{
		QPainter varP{this};
		varP.setPen(Qt::NoPen);
		varP.setBrush(QColor(122,222,223));
		varP.drawRect(this->rect());
		return QLabel::paintEvent(arg);
	}

	 

};

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	QTextEdit x;
	QTextDocument * document = x.document();
	qDebug() << typeid(*document).name();
	document->setDocumentLayout(new sstd::QTextDocumentLayout(document));
	QAbstractTextDocumentLayout * layout = document->documentLayout();
	qDebug() << typeid(*layout).name();

	{
		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(new frame)"));
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		{
			auto varFont = x.font();
			varFont.setPointSizeF(12);
			x.setFont(varFont);
		}
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzz)"));
	}

	{
		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(new frame)"));
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfs)"));
	}

	{
		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(new frame)"));
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费拉说服力的撒沙发搜发货地ask发的开发货款的)"));
	}

	{
		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(new frame)"));
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费拉说服力的撒沙发搜发货地ask发的开发货款的)"));
	}

	{
		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(new frame)"));
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费拉说服力的撒沙发搜发货地ask发的开发货款的)"));
	}

	{
		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(new frame)"));
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费拉说服力的撒沙发搜发货地ask发的开发货款的)"));
	}

	{
		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(new frame)"));
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费拉说服力的撒沙发搜发货地ask发的开发货款的)"));
	}

	{
		{
			QTextCursor varC{ x.document()->rootFrame() };
			varC.movePosition(QTextCursor::End);
			x.setTextCursor(varC);
		}
		{
			x.insertPlainText(QString::fromUtf8(u8R"(new frame1)"));
		}
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费
拉说服力的撒沙发搜发货地ask。
发的开发货款的)"));
	}

	{
		{
			QTextCursor varC{ x.document()->rootFrame() };
			varC.movePosition(QTextCursor::End);
			x.setTextCursor(varC);
		}
		{
			x.insertPlainText(QString::fromUtf8(u8R"()"));
		}
		{
			QTextCursor varC{ x.document()->rootFrame() };
			varC.movePosition(QTextCursor::End);
			QTextBlock varBlock = varC.block();
			QTextBlockFormat varFormat = varBlock.blockFormat();
			varFormat.setLineHeight(1, QTextBlockFormat::FixedHeight);
			varC.setBlockFormat(varFormat);
		}
	}

	{
		QTextCursor varC{ x.document() };
		varC.movePosition(QTextCursor::End);
		QTextFrameFormat varFormat;
		varFormat.setMargin(10);
		varFormat.setPadding(0);
		varFormat.setBorder(0.005);
		auto f = varC.insertFrame(varFormat);
		f->setProperty(sstd::dynamic_property_name(), 1);
		x.setTextCursor(varC);
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费
拉说服力的撒沙发搜发货地ask。
发的开发货款的)"));
	}



	auto gifInterface = new GifTextObject;
	gifInterface->setParent(&x);
	x.document()->documentLayout()->registerHandler(GifTextFormat, gifInterface);

	/*{

		QTextCursor varC{ x.document()->rootFrame() };
		varC.movePosition(QTextCursor::End);
		
		auto * x1 = new WTest;
		x1->setParent( x.viewport() );
		x1->resize(34,34);
		x1->setText("1212");
		x1->show();

		QTextCharFormat svgCharFormat;

		svgCharFormat.setObjectType(GifTextFormat);
		svgCharFormat.setProperty(QTextCharFormat::UserProperty+1,QVariant::fromValue<QWidget *>(x1));
		svgCharFormat.setProperty(QTextCharFormat::UserProperty+2, QVariant::fromValue<QWidget *>(&x));
		
		varC.insertText(QString(QChar::ObjectReplacementCharacter), svgCharFormat);

		x.setTextCursor(varC);

	}*/


	//class KeyPressEater : public QObject
	//{

	//protected:
	//	bool eventFilter(QObject *obj, QEvent *event) override {
	//		if (event->type() == QEvent::Resize) {
	//		//	qDebug() << "resize" <<  dynamic_cast<QResizeEvent*>(event)->size() ;
	//		}
	//		else if (event->type() == QEvent::Move) {
	//		//	qDebug() << "move";
	//		}
	//		return QObject::eventFilter(obj, event);
	//	}
	//};
	//x.viewport()->installEventFilter( new KeyPressEater );

	x.show();

	//qDebug() << (&x == x.viewport());
	//qDebug() << x.viewport()->rect();
	//qDebug() << typeid(*(x.viewport())).name();
	//	

	//{
	//	QTextCursor c{ x.document() };
	//	c.setPosition(0, QTextCursor::MoveAnchor);
	//	c.setPosition(1, QTextCursor::KeepAnchor);
	//	qDebug() << x.cursorRect(c);
	//}

	//{
	//	QTextCursor c{ x.document() };
	//	c.setPosition(5, QTextCursor::MoveAnchor);
	//	c.setPosition(6, QTextCursor::KeepAnchor);
	//	qDebug() << x.cursorRect(c);
	//}

	//c.select(QTextCursor::WordUnderCursor);
	//x.setTextCursor(c);

	//MainWindow window;
	//window.show();

	//ListView view;
	//QStringListModel model;
	//model.setStringList(QStringList{ 
	//	QStringLiteral("aaa"),
	//	QStringLiteral("bbb"),
	//	QStringLiteral("ccc"),
	//	QStringLiteral("aaa"),
	//	QStringLiteral("bbb"),
	//	QStringLiteral("ccc") });
	//view.setModel(&model);
	//view.show();

	//Test test;
	//test.show();

	return app.exec();
}
