#include <iostream>
#include <kernel/EventManager.h>

int main(int argc, char *argv[])
{
	EventManager app(argc, argv);

	return app.start();
}
