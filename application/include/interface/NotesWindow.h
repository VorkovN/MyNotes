#ifndef MYNOTE_NOTESWINDOW
#define MYNOTE_NOTESWINDOW

#include <QApplication>
#include <QDesktopWidget>
#include <QWidget>
#include <QLabel>



namespace interface
{

	class NotesWindow: public QWidget
	{
	public:
		explicit NotesWindow(QWidget *parent = nullptr);

	private:
		QRect _rect;
		QLabel *_notesLabel;

	};

}
#endif
