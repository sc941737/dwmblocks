//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",		"blocks-volume",	0,			10},

	{"",	 	"blocks-memory",	30,			0},

	{"",	 	"blocks-power",		60,			0},

	{"",	 	"blocks-time",		60,			0},

	{"❌ ",	 	"blocks-close-btn",	0,			9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
