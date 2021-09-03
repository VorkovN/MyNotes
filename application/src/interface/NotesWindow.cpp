#include "interface/NotesWindow.h"

namespace interface
{

	NotesWindow::NotesWindow(QWidget *parent): _rect(QApplication::desktop()->screenGeometry())
	{
		_notesLabel = new QLabel(this);
		_notesLabel->setGeometry(0, 0, 0.75 * _rect.width(), _rect.height());
		_notesLabel->setText("helloWorld");
	}

}