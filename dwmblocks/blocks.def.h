//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"💻 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},
  {" ",   "/home/suphal/.scripts/brightness.sh",   2,  0},
  {"🔊 ", "amixer get Master | awk -F'[]%[]' '/%/ {if ($7 == \"off\") { print \"MM\" } else { print $2 }}' | head -n 1", 1, 0},
	{" ", "date '+%b %d (%a) 🕑 %I:%M%p'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
