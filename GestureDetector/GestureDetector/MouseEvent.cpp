#include "MouseEvent.hpp"

void MouseEvent::trigger() {
	INPUT input[2];
	input[0] = createMouseInput(getButtonDownCode());
	input[1] = createMouseInput(getButtonUpCode());
	SendInput(2, input, sizeof(INPUT));
}

INPUT MouseEvent::createMouseInput(int buttonCode) {
	INPUT input;
	memset(&input, 0, sizeof(input));
	input.type = INPUT_MOUSE;
	input.mi.dwFlags = buttonCode;
	return input;
}

