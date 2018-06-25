#ifndef LISTVIEWITEMDELEGATE_HPP
#define LISTVIEWITEMDELEGATE_HPP

#include <memory>
#include <QtWidgets/qstyleditemdelegate.h>

class ListViewItemDelegatePrivate;
class ListViewItemDelegate : public QStyledItemDelegate {
public:
    ListViewItemDelegate(QObject *parent = nullptr);
	class Memory { public:virtual ~Memory() {} };

protected:
	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
	bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override;
protected:
    friend class ListViewItemDelegatePrivate;
    std::unique_ptr<Memory> _m_thisp;
	ListViewItemDelegatePrivate * thisp();
	const ListViewItemDelegatePrivate * thisp() const;
};

#endif // LISTVIEWITEMDELEGATE_HPP
