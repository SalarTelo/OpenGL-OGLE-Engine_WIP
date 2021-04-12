#pragma once
namespace OGLE
{
	enum class InputType
	{
		Keyboard,
		Mouse,
		Joystick,

	};
	enum class PressType
	{
		Down = GLFW_PRESS,
		Release = GLFW_RELEASE,
	};
	enum class KeyCode : int {
		SPACE = 32,
		APOSTROPHE = 39,
		COMMA = 44,
		MINUS = 45,
		PERIOD = 46,
		SLASH = 47,

		NUM0 = 48,
		NUM1 = 49,
		NUM2 = 50,
		NUM3 = 51,
		NUM4 = 52,
		NUM5 = 53,
		NUM6 = 54,
		NUM7 = 55,
		NUM8 = 56,
		NUM9 = 57,

		SEMICOLON = 59,
		EQUAL = 61,

		KEY_A = 65,
		KEY_B = 66,
		KEY_C = 67,
		KEY_D = 68,
		KEY_E = 69,
		KEY_F = 70,
		KEY_G = 71,
		KEY_H = 72,
		KEY_I = 73,
		KEY_J = 74,
		KEY_K = 75,
		KEY_L = 76,
		KEY_M = 77,
		KEY_N = 78,
		KEY_O = 79,
		KEY_P = 80,
		KEY_Q = 81,
		KEY_R = 82,
		KEY_S = 83,
		KEY_T = 84,
		KEY_U = 85,
		KEY_V = 86,
		KEY_W = 87,
		KEY_X = 88,
		KEY_Y = 89,
		KEY_Z = 90,

		LEFT_BRACKET = 91,
		BACKSLASH = 92,
		RIGHT_BRACKET = 93,
		GRAVE_ACCENT = 96,

		KEY_ESC = 256,
		KEY_ENTER = 257,
		KEY_TAB = 258,
		KEY_BACKSPACE = 259,
		KEY_INSERT = 260,
		KEY_DELETE = 261,
		KEY_RIGHT = 262,
		KEY_LEFT = 263,
		KEY_DOWN = 264,
		KEY_UP = 265,
		KEY_PAGE_UP = 266,
		KEY_PAGE_DOWN = 267,
		KEY_HOME = 268,
		KEY_END = 269,
		KEY_CAPS_LOCK = 280,
		KEY_SCROLL_LOCK = 281,
		KEY_NUM_LOCK = 282,
		KEY_PRINT_SCREEN = 283,
		KEY_PAUSE = 284,

		KEY_F1 = 290,
		KEY_F2 = 291,
		KEY_F3 = 292,
		KEY_F4 = 293,
		KEY_F5 = 294,
		KEY_F6 = 295,
		KEY_F7 = 296,
		KEY_F8 = 297,
		KEY_F9 = 298,
		KEY_F10 = 299,
		KEY_F11 = 300,
		KEY_F12 = 301,
		KEY_F13 = 302,
		KEY_F14 = 303,
		KEY_F15 = 304,
		KEY_F16 = 305,
		KEY_F17 = 306,
		KEY_F18 = 307,
		KEY_F19 = 308,
		KEY_F20 = 309,
		KEY_F21 = 310,
		KEY_F22 = 311,
		KEY_F23 = 312,
		KEY_F24 = 313,
		KEY_F25 = 314,

		NUMPAD_0 = 320,
		NUMPAD_1 = 321,
		NUMPAD_2 = 322,
		NUMPAD_3 = 323,
		NUMPAD_4 = 324,
		NUMPAD_5 = 325,
		NUMPAD_6 = 326,
		NUMPAD_7 = 327,
		NUMPAD_8 = 328,
		NUMPAD_9 = 329,

		NUMPAD_DECIMAL = 330,
		NUMPAD_DIVIDE = 331,
		NUMPAD_MULTIPLY = 332,
		NUMPAD_SUBTRACT = 333,
		NUMPAD_ADD = 334,
		NUMPAD_ENTER = 335,
		NUMPAD_EQUAL = 336,

		KEY_LEFT_SHIFT = 340,
		KEY_LEFT_CONTROL = 341,
		KEY_LEFT_ALT = 342,
		KEY_LEFT_SUPER = 343,
		KEY_RIGHT_SHIFT = 344,
		KEY_RIGHT_CONTROL = 345,
		KEY_RIGHT_ALT = 346,
		KEY_RIGHT_SUPER = 347,

		KEY_MENU = 348
	};
	enum class MouseCode : int {
		MOUSE01 = 0,
		MOUSE02 = 1,
		MOUSE03 = 2,
		MOUSE04 = 3,
		MOUSE05 = 4,
		MOUSE06 = 5,
		MOUSE07 = 6,
		MOUSE08 = 7,

		MOUSE_LEFT = MOUSE01,
		MOUSE_RIGHT = MOUSE02,
		MOUSE_MIDDLE = MOUSE03
	};
	enum class JoyStickCode : int {
		JOYSTICK_1 = 0,
		JOYSTICK_2 = 1,
		JOYSTICK_3 = 2,
		JOYSTICK_4 = 3,
		JOYSTICK_5 = 4,
		JOYSTICK_6 = 5,
		JOYSTICK_7 = 6,
		JOYSTICK_8 = 7,
		JOYSTICK_9 = 8,
		JOYSTICK_10 = 9,
		JOYSTICK_11 = 10,
		JOYSTICK_12 = 11,
		JOYSTICK_13 = 12,
		JOYSTICK_14 = 13,
		JOYSTICK_15 = 14,
		JOYSTICK_16 = 15,
	};
	enum class GamePadKeyCode : int {
		BTN_A = 0,
		BTN_B = 1,

		BTN_X = 2,
		BTN_Y = 3,

		BTN_LEFT_BUMPER = 4,
		BTN_RIGHT_BUMPER = 5,

		BTN_BACK = 6,
		BTN_START = 7,
		BTN_GUIDE = 8,

		BTN_LEFT_THUMB = 9,
		BTN_RIGHT_THUMB = 10,

		BTN_DPAD_UP = 11,
		BTN_DPAD_RIGHT = 12,
		BTN_DPAD_DOWN = 13,
		BTN_DPAD_LEFT = 14,

		BTN_CROSS = BTN_A,
		BTN_CIRCLE = BTN_B,
		BTN_SQUARE = BTN_X,
		BTN_TRIANGLE = BTN_Y
	};
	enum class GamePadAxisCode : int {
		AXIS_LEFT_X = 0,
		AXIS_LEFT_Y = 1,

		AXIS_RIGHT_X = 2,
		AXIS_RIGHT_Y = 3,

		AXIS_LEFT_TRIGGER = 4,
		AXIS_RIGHT_TRIGGER = 5,
	};

}