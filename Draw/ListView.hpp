#ifndef LISTVIEW_HPP
#define LISTVIEW_HPP

#include <memory>
#include <QtWidgets/qlistview.h>

class ListViewPrivate;
class ListView : public QListView {
public:
    ListView( QWidget * parent = nullptr );
	~ListView();
protected:
	friend class ListViewPrivate;
	ListViewPrivate * thisp;
};

#endif // LISTVIEW_HPP

