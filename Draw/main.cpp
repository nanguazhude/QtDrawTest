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

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	MainWindow window;
	window.show();

	Test test;
	test.show();

	return app.exec();
}
