#ifndef MYNOTE_WINDOWMANAGER_H
#define MYNOTE_WINDOWMANAGER_H

#include <QApplication>

#include <interface/MainWindow.h>

namespace interface
{

	class WindowManager
	{
	public:
		WindowManager(int argc, char **argv);
		~WindowManager() = default;

		int start();

	private:
		QApplication _qApp;
		MainWindow _mainWindow;
	};

}
#endif
