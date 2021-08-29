#include "kernel/EventManager.h"

namespace kernel
{

	EventManager::EventManager(int argc, char **argv)
			: _windowManager(argc, argv)
	{
	}
	int EventManager::start()
	{
		return _windowManager.start();
	}

}
