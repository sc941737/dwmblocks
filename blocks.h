//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {"", "printf ''", 							0, 		0},

	{"🔊 ", "vol=$(wpctl get-volume @DEFAULT_AUDIO_SINK@); echo ${vol#*.}%",	0,		10},

	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"⚡ ", "echo \"$(cat /sys/class/power_supply/BAT1/capacity)%\"",		60,		0},

	{"", "date '+%b %d (%a) %H:%M'",					60,		0},

	{"X ", "xdotool windowclose $(xdotool getwindowfocus)",			0,		9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
