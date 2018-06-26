#include "ListViewItemDelegate.hpp"
#include <QtCore/qdebug.h>
#include <QtGui/QtGui>

class ListViewItemDelegatePrivate : public ListViewItemDelegate::Memory {
private:

public:
	QPointF MousePos;
public:
	bool editorEvent(QEvent* event,
		QAbstractItemModel* model,
		const QStyleOptionViewItem& option,
		const QModelIndex& index) {
		
			{
				auto varMouseEvent = dynamic_cast<QMouseEvent *>(event);
				if (nullptr == varMouseEvent) { return false; }
				MousePos = varMouseEvent->pos();
				/*因为我们虚拟控件，判断此事件是否由虚拟控件处理...*/
				

			}

		/*强迫父对象处理此事件*/
		return false;

	}

	void paint(QPainter *painter,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const {

		qstyleoption_cast<const QStyleOptionViewItem *>(&option);

		painter->setRenderHints(
			QPainter::Antialiasing |
			QPainter::TextAntialiasing |
			QPainter::SmoothPixmapTransform |
			QPainter::HighQualityAntialiasing);

		{/*绘制背景*/
			const auto varDrawBackgroundCase = index.row() % 3 ;
			switch (varDrawBackgroundCase) {
			case 0b000: {painter->fillRect(option.rect, QColor(255, 0, 0, 125)); }break;
			case 0b001: {painter->fillRect(option.rect, QColor(0, 255, 0, 125)); }break;
			case 0b010: {painter->fillRect(option.rect, QColor(0, 0, 255, 125)); }break;
			case 0b011: {painter->fillRect(option.rect, QColor(255, 0, 0, 125)); }break;
			}
		}

		{/*绘制边框*/
			qDebug() << option.state;
			if ((option.state  & QStyle::State_HasFocus)||
				(option.state  & QStyle::State_Selected)) {
				painter->setBrush( QColor(1,2,3,0) );
				painter->setPen( QPen(QColor(0,0,0,255),1.5) );
				painter->drawRect( option.rect );
			}
		}

		{/*绘制Txt*/
			const auto & varText = option.text;
			painter->drawText(option.rect,varText);
		}

	}

};

ListViewItemDelegatePrivate * ListViewItemDelegate::thisp() { return static_cast<ListViewItemDelegatePrivate*>(this->_m_thisp.get()); }
const ListViewItemDelegatePrivate * ListViewItemDelegate::thisp() const { return static_cast<const ListViewItemDelegatePrivate*>(this->_m_thisp.get()); }

ListViewItemDelegate::ListViewItemDelegate(QObject *parent)
	:QStyledItemDelegate(parent),
	_m_thisp(new ListViewItemDelegatePrivate) {
}

void ListViewItemDelegate::paint(QPainter *a,
	const QStyleOptionViewItem &b,
	const QModelIndex &c) const {

	QStyleOptionViewItem varItem{b};
	this->initStyleOption(&varItem,c);

	return thisp()->paint(a, varItem, c);
}

bool ListViewItemDelegate::editorEvent(QEvent* a,
	QAbstractItemModel* b,
	const QStyleOptionViewItem& c,
	const QModelIndex& d) {
	return thisp()->editorEvent(a, b, c, d);
}



