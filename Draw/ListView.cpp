#include "ListView.hpp"
#include "ListViewItemDelegate.hpp"
#include <QtWidgets/qlistview.h>
#include <QtWidgets/private/qlistview_p.h>

class ListViewPrivate {
public:
    ListViewPrivate() :delegate(new ListViewItemDelegate){}
	std::unique_ptr<ListViewItemDelegate> delegate;
};

ListView::ListView(QWidget *parent) :
	QListView(parent),
	thisp(new ListViewPrivate){
    this->setItemDelegate(thisp->delegate.get());
	this->setMouseTracking(true);
	this->setSelectionMode(ExtendedSelection);
	
}
 
ListView::~ListView() {
	delete thisp;
}


