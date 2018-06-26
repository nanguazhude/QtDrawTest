#include "MainWindow.hpp"
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
		varStyle->drawControl(QStyle::CE_PushButton, &varDrawData, &varPainter,this);

		(void)event;
		//https://blog.csdn.net/liang19890820/article/details/50974059
		//QPainterPathStroker

	}

};

#include "ListView.hpp"

#include<QtGui/private/qtextdocumentlayout_p.h>

#include "sstd_qtextdocumentlayout_p.h"

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	QTextBrowser x;
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
		f->setProperty(sstd::dynamic_property_name(),1);
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
		x.insertPlainText(QString::fromUtf8(u8R"(zzzzzsdfsjin发生的雷锋精神啦水电费
拉说服力的撒沙发搜发货地ask。
发的开发货款的)"));
	}

	x.show();


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
