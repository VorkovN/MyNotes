#include "interface/WindowManager.h"

namespace interface
{

	WindowManager::WindowManager(int argc, char **argv)
			: _qApp(argc, argv)
	{
	}

	int WindowManager::start()
	{
		_mainWindow.setWindowTitle("MyNotes");
		_mainWindow.showMaximized();
		return _qApp.exec();
	}

}