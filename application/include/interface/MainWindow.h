#ifndef MYNOTE_MAINWINDOW
#define MYNOTE_MAINWINDOW

#include "QWidget"

namespace interface
{

	class MainWindow: public QWidget
	{
	public:
		explicit MainWindow(QWidget *parent = nullptr);
		~MainWindow() override;

	private slots:


	private:

	};

}

#endif