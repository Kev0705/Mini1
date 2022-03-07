#pragma once
#include "Event.h"
#include "Stage.h"
#include "Unit.h"
#include "UserInterface.h"

int start() {
	starting s(10, 5);
	s.Name();
	starting e(0, 0);
	e.End();
	starting g(15, 7);
	g.mainguide();
	return 0;
}