#ifndef MYNOTE_WindowManager
#define MYNOTE_WindowManager

#include <kernel/EventAnalyzer.h>

#include <interface/WindowManager.h>
#include <database_gw/DataBaseFacade.h>

class EventManager
{
public:
	EventManager(int argc, char** argv);
	~EventManager() = default;

	int start();

private:
	WindowManager _windowManager;
	EventAnalyzer _eventAnalyzer;
	DataBaseFacade _dataBaseFacade;
};

#endif
