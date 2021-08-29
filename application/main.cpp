#include <kernel/EventManager.h>

int main(int argc, char *argv[])
{
	kernel::EventManager app(argc, argv);

	return app.start();
}
