#ifndef MYNOTE_WindowManager
#define MYNOTE_WindowManager

#include <kernel/EventAnalyzer.h>

#include <interface/WindowManager.h>
#include <database_gw/DataBaseFacade.h>

namespace kernel
{

	class EventManager
	{
	public:
		EventManager(int argc, char **argv);
		~EventManager() = default;

		int start();

	private:
		interface::WindowManager _windowManager;
		EventAnalyzer _eventAnalyzer;
		database_gw::DataBaseFacade _dataBaseFacade;
	};

}

#endif
