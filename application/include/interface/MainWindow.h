#ifndef MYNOTE_MAINWINDOW
#define MYNOTE_MAINWINDOW

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>

#include "NotesWindow.h"

namespace interface
{

	class MainWindow: public QMainWindow
	{
	public:
		explicit MainWindow(QWidget *parent = nullptr);
		~MainWindow() override;

	private slots:
		void onNoteButtonClicked();
		void addNewButton();
		QSize getScreenSize();

	private:
		int _maxCountBtnWidth;
		int _maxCountBtnHeight;
		int _btnCount;
		QRect _rect;
		std::vector<QPushButton*> _buttons;

		QPushButton* _newButtonButton;
		QGridLayout* _gridLayout;
		QWidget* _centralWidget;
		NotesWindow _notesWindow;
	};

}

#endif